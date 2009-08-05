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

#include "eventfilter.h"
#include "proxymodel.h"
#include "sequenceitem.h"
#include "sequencemodel.h"

void ProxyModel::setFilterTrack(int track)
{
    if (track != m_trackFilter) {
        m_trackFilter = track;
        invalidateFilter();
    }
}

void ProxyModel::setFilterChannelMsg(bool newValue)
{
    bool channelMessageFilter = m_filter->getFilter(ChannelCategory);
    if (channelMessageFilter != newValue) {
        m_filter->setFilter(ChannelCategory, newValue);
        invalidateFilter();
    }
}

void ProxyModel::setFilterCommonMsg(bool newValue)
{
    bool commonMessageFilter = m_filter->getFilter(SysCommonCategory);
    if (commonMessageFilter != newValue) {
        m_filter->setFilter(SysCommonCategory, newValue);
        invalidateFilter();
    }
}

void ProxyModel::setFilterRealTimeMsg(bool newValue)
{
    bool realtimeMessageFilter = m_filter->getFilter(SysRTCategory);
    if (realtimeMessageFilter != newValue) {
        m_filter->setFilter(SysRTCategory, newValue);
        invalidateFilter();
    }
}

void ProxyModel::setFilterSysexMsg(bool newValue)
{
    bool sysexMessageFilter = m_filter->getFilter(SysExCategory);
    if (sysexMessageFilter != newValue) {
        m_filter->setFilter(SysExCategory, newValue);
        invalidateFilter();
    }
}

void ProxyModel::setFilterAlsaMsg(bool newValue)
{
    bool alsaMessageFilter = m_filter->getFilter(ALSACategory);
    if (alsaMessageFilter != newValue) {
        m_filter->setFilter(ALSACategory, newValue);
        invalidateFilter();
    }
}

void ProxyModel::setFilterSmfMsg(bool newValue)
{
    bool smfMessageFilter = m_filter->getFilter(SMFCategory);
    if (smfMessageFilter != newValue) {
        m_filter->setFilter(SMFCategory, newValue);
        invalidateFilter();
    }
}

bool ProxyModel::filterSequencerEvent(const SequencerEvent* ev) const
{
/*
    switch (ev->getSequencerType()) {
    // MIDI Channel events
    case SND_SEQ_EVENT_NOTEON:
    case SND_SEQ_EVENT_NOTEOFF:
    case SND_SEQ_EVENT_KEYPRESS:
    case SND_SEQ_EVENT_CONTROLLER:
    case SND_SEQ_EVENT_PGMCHANGE:
    case SND_SEQ_EVENT_CHANPRESS:
    case SND_SEQ_EVENT_PITCHBEND:
    case SND_SEQ_EVENT_CONTROL14:
    case SND_SEQ_EVENT_NONREGPARAM:
    case SND_SEQ_EVENT_REGPARAM:
        return m_channelMessageFilter;

    case SND_SEQ_EVENT_SYSEX:
        return m_sysexMessageFilter;

    // MIDI Common events
    case SND_SEQ_EVENT_SONGPOS:
    case SND_SEQ_EVENT_SONGSEL:
    case SND_SEQ_EVENT_QFRAME:
    case SND_SEQ_EVENT_TUNE_REQUEST:
        return m_commonMessageFilter;

    // MIDI Realtime Events
    case SND_SEQ_EVENT_START:
    case SND_SEQ_EVENT_CONTINUE:
    case SND_SEQ_EVENT_STOP:
    case SND_SEQ_EVENT_CLOCK:
    case SND_SEQ_EVENT_TICK:
    case SND_SEQ_EVENT_RESET:
    case SND_SEQ_EVENT_SENSING:
        return m_realtimeMessageFilter;

    // ALSA Client/Port events
    case SND_SEQ_EVENT_PORT_START:
    case SND_SEQ_EVENT_PORT_EXIT:
    case SND_SEQ_EVENT_PORT_CHANGE:
    case SND_SEQ_EVENT_CLIENT_START:
    case SND_SEQ_EVENT_CLIENT_EXIT:
    case SND_SEQ_EVENT_CLIENT_CHANGE:
    case SND_SEQ_EVENT_PORT_SUBSCRIBED:
    case SND_SEQ_EVENT_PORT_UNSUBSCRIBED:
        return m_alsaMessageFilter;

    // SMF Meta events
    case SND_SEQ_EVENT_USR_VAR0:
    case SND_SEQ_EVENT_USR_VAR1:
    case SND_SEQ_EVENT_USR_VAR2:
    case SND_SEQ_EVENT_USR_VAR3:
    case SND_SEQ_EVENT_USR_VAR4:
    case SND_SEQ_EVENT_USR0:
    case SND_SEQ_EVENT_USR1:
    case SND_SEQ_EVENT_USR2:
    case SND_SEQ_EVENT_USR3:
    case SND_SEQ_EVENT_USR4:
    case SND_SEQ_EVENT_USR5:
    case SND_SEQ_EVENT_USR6:
    case SND_SEQ_EVENT_USR7:
    case SND_SEQ_EVENT_USR8:
    case SND_SEQ_EVENT_USR9:
    case SND_SEQ_EVENT_KEYSIGN:
    case SND_SEQ_EVENT_TIMESIGN:
    case SND_SEQ_EVENT_TEMPO:
        return m_smfMessageFilter;
    // Other events
    default:
        return true;
    }
*/
    if (m_filter != NULL && m_filter->contains(ev->getSequencerType()))
        return m_filter->getFilter(ev->getSequencerType());
    return true;
}

bool ProxyModel::filterAcceptsRow(int sourceRow,
        const QModelIndex& /*sourceParent*/) const
{
    SequenceModel* sModel = static_cast<SequenceModel*>(sourceModel());
    const SequenceItem* itm = sModel->getItem(sourceRow);
    if (itm) {
        const SequencerEvent* ev = itm->getEvent();
        if (ev) return (itm->getTrack() == m_trackFilter) &&
                       filterSequencerEvent(ev);
    }
    return false;
}

bool ProxyModel::showChannelMsg() const
{
    return m_filter->getFilter(ChannelCategory);
}

bool ProxyModel::showCommonMsg() const
{
    return m_filter->getFilter(SysCommonCategory);
}

bool ProxyModel::showRealTimeMsg() const
{
    return m_filter->getFilter(SysRTCategory);
}

bool ProxyModel::showSysexMsg() const
{
    return m_filter->getFilter(SysExCategory);
}

bool ProxyModel::showAlsaMsg() const
{
    return m_filter->getFilter(ALSACategory);
}

bool ProxyModel::showSmfMsg() const
{
    return m_filter->getFilter(SMFCategory);
}
