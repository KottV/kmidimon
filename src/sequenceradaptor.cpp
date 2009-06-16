/***************************************************************************
 *   KMidimon - ALSA sequencer based MIDI monitor                          *
 *   Copyright (C) 2005-2009 Pedro Lopez-Cabanillas                        *
 *   plcl@users.sourceforge.net                                            *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the Free Software           *
 *   Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,            *
 *   MA 02110-1301, USA                                                    *
 ***************************************************************************/

#include <iostream>
#include <stdexcept>
#include <QStringList>
#include <QDebug>

#include <kapplication.h>
#include <klocale.h>

#include <client.h>
#include <port.h>
#include <queue.h>
#include <subscription.h>
#include <event.h>

#include "sequenceradaptor.h"
#include "sequenceitem.h"
#include "sequencemodel.h"
#include "player.h"

using namespace std;

SequencerAdaptor::SequencerAdaptor(QObject *parent):
    QObject(parent),
    m_queue_running(false),
    m_resolution(RESOLUTION),
    m_tempo(TEMPO_BPM)
{
    m_client = new MidiClient(this);
    m_client->setOpenMode(SND_SEQ_OPEN_DUPLEX);
    m_client->setBlockMode(false);
    m_client->open();
    m_client->setClientName("KMidimon");
    connect(m_client, SIGNAL(eventReceived(SequencerEvent*)),
            SLOT(sequencerEvent(SequencerEvent*)));

    m_queue = m_client->createQueue("KMidimon");

    m_port = new MidiPort(this);
    m_port->setMidiClient(m_client);
    m_port->setPortName("KMidimon");
    m_port->setCapability( SND_SEQ_PORT_CAP_READ |
                           SND_SEQ_PORT_CAP_WRITE |
                           SND_SEQ_PORT_CAP_SUBS_READ |
                           SND_SEQ_PORT_CAP_SUBS_WRITE );
    m_port->setPortType( SND_SEQ_PORT_TYPE_MIDI_GENERIC |
                         SND_SEQ_PORT_TYPE_APPLICATION );
    m_port->setMidiChannels(16);
    m_port->setTimestamping(true);
    m_port->setTimestampReal(false);
    m_port->setTimestampQueue(m_queue->getId());
    m_port->attach();
    m_port->subscribeFromAnnounce();

    m_player = new Player(m_client, m_port->getPortId());
    connect(m_player, SIGNAL(finished()), SLOT(songFinished()));
    connect(m_player, SIGNAL(finished()), parent, SLOT(songFinished()));

    m_client->startSequencerInput();
}

SequencerAdaptor::~SequencerAdaptor()
{
    m_client->stopSequencerInput();
    m_port->detach();
    m_client->close();
}

void SequencerAdaptor::setModel(SequenceModel* m)
{
    m_model = m;
    m_model->updateQueue(m_queue->getId());
    m_model->updatePort(m_port->getPortId());
}

void SequencerAdaptor::updatePlayer()
{
    m_player->setSong(m_model->getSong());
}

void SequencerAdaptor::updateModelClients()
{
    ClientsMap m;
    ClientInfoList list = m_client->getAvailableClients();
    ClientInfoList::ConstIterator it;
    for(it = list.constBegin(); it != list.constEnd(); ++it) {
        ClientInfo c = *it;
        m.insert(c.getClientId(), c.getName());
    }
    m_model->updateClients(m);
}


void SequencerAdaptor::sequencerEvent(SequencerEvent* ev)
{
    if (m_queue_running) {
        QueueStatus s = m_queue->getStatus();
        unsigned int ticks = s.getTickTime();
        double seconds = s.getClockTime();
        ev->setSource(m_port->getPortId());
        ev->setSubscribers();
        ev->scheduleTick(m_queue->getId(), ev->getTick(), false);
        SequenceItem itm(seconds, ticks, ev);
        if (ev->isClient())
            updateModelClients();
        m_model->addItem(itm);
    } else {
        delete ev;
    }
}

void SequencerAdaptor::play()
{
    if (!m_model->isEmpty()) {
        if (m_player->getInitialPosition() == 0) {
            int initialTempo = m_model->getInitialTempo();
            if (initialTempo == 0) {
                return;
            }
            updatePlayer();
            QueueTempo firstTempo = m_queue->getTempo();
            firstTempo.setPPQ(m_model->getSMFDivision());
            firstTempo.setTempo(initialTempo);
            //firstTempo.setTempoFactor(m_tempoFactor);
            m_queue->setTempo(firstTempo);
            m_client->drainOutput();
        }
        qDebug() << "starting playback...";
        m_player->start();
    }
}

void SequencerAdaptor::pause()
{
    if (m_player->isRunning()) {
        m_player->stop();
        m_player->setPosition(m_queue->getStatus().getTickTime());
    }
}

void SequencerAdaptor::stop()
{
    if (m_player->isRunning() && (m_model->getInitialTempo() != 0)) {
        m_player->stop();
        songFinished();
    }
}

void SequencerAdaptor::rewind()
{
    m_player->resetPosition();
}

void SequencerAdaptor::forward()
{
    m_player->setPosition(999999);
}

void SequencerAdaptor::queue_start()
{
    m_queue->start();
    m_queue_running = m_queue->getStatus().isRunning();
}

void SequencerAdaptor::queue_stop()
{
    m_queue->stop();
    m_queue_running = m_queue->getStatus().isRunning();
}

void SequencerAdaptor::queue_set_tempo()
{
    QueueTempo tempo = m_queue->getTempo();
    tempo.setPPQ(m_resolution);
    tempo.setNominalBPM(m_tempo);
    m_queue->setTempo(tempo);
}

QStringList SequencerAdaptor::inputConnections()
{
    PortInfoList inputs(m_client->getAvailableInputs());
    return list_ports(inputs);
}

QStringList SequencerAdaptor::outputConnections()
{
    PortInfoList outputs(m_client->getAvailableOutputs());
    return list_ports(outputs);
}

QStringList SequencerAdaptor::list_ports(PortInfoList& refs)
{
    QStringList lst;
    foreach(PortInfo p, refs) {
        lst += QString("%1:%2").arg(p.getClientName()).arg(p.getPort());
    }
    return lst;
}

void SequencerAdaptor::connect_input(QString name)
{
    if (!name.isEmpty())
        m_port->subscribeFrom(name);
}

void SequencerAdaptor::disconnect_input(QString name)
{
    if (!name.isEmpty())
        m_port->unsubscribeFrom(name);
}

void SequencerAdaptor::connect_output(QString name)
{
    if (!name.isEmpty())
        m_port->subscribeTo(name);
}

void SequencerAdaptor::disconnect_output(QString name)
{
    if (!name.isEmpty())
        m_port->unsubscribeTo(name);
}

QStringList SequencerAdaptor::list_subscribers()
{
    QStringList list;
    m_port->updateSubscribers();
    PortInfoList subs(m_port->getWriteSubscribers());
    PortInfoList::ConstIterator it;
    for(it = subs.constBegin(); it != subs.constEnd(); ++it) {
        PortInfo p = *it;
        list += QString("%1:%2").arg(p.getClientName()).arg(p.getPort());
    }
    return list;
}

QString SequencerAdaptor::output_subscriber()
{
    m_port->updateSubscribers();
    PortInfoList subs(m_port->getReadSubscribers());
    PortInfoList::ConstIterator it;
    for(it = subs.constBegin(); it != subs.constEnd(); ++it) {
        PortInfo p = *it;
        return QString("%1:%2").arg(p.getClientName()).arg(p.getPort());
    }
    return QString::null;
}

void SequencerAdaptor::disconnect_all_inputs()
{
    m_port->updateSubscribers();
    PortInfoList subs(m_port->getWriteSubscribers());
    PortInfoList::ConstIterator it;
    for(it = subs.constBegin(); it != subs.constEnd(); ++it) {
        PortInfo p = *it;
        m_port->unsubscribeFrom(&p);
    }
}

void SequencerAdaptor::connect_all_inputs()
{
    QStringList subs = list_subscribers();
    QStringList ports = inputConnections();
    QStringList::ConstIterator it;
    for ( it = ports.constBegin(); it != ports.constEnd(); ++it ) {
        if (subs.contains(*it) == 0)
            connect_input(*it);
    }
}

void SequencerAdaptor::songFinished()
{
    m_player->resetPosition();
    //ui.btnStop->setChecked(true);
}
