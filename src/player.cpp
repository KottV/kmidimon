/*
    KMidimon - ALSA sequencer based MIDI monitor                          *
    Copyright (C) 2005-2009 Pedro Lopez-Cabanillas                        *

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/

#include "player.h"

Player::Player(MidiClient *seq, int portId)
    : SequencerOutputThread(seq, portId),
    m_song(0),
    m_songIterator(0),
    m_songPosition(0),
    m_echoResolution(0)
{ }

Player::~Player()
{
    if (isRunning() && !stopped()) {
        stop();
    }
    if (m_songIterator != NULL) {
        delete m_songIterator;
    }
}

void Player::setSong(Song* s, int division)
{
    m_song = s;
    if (m_song != NULL) {
        if (m_songIterator != NULL) {
            delete m_songIterator;
        }
        m_songIterator = new SongIterator(*m_song);
        m_echoResolution = division / 12;
        resetPosition();
    }
}

void Player::resetPosition()
{
    if ((m_song != NULL) && (m_songIterator != NULL)) {
        m_songIterator->toFront();
        m_songPosition = 0;
    }
}

void Player::setPosition(unsigned int pos)
{
    m_songPosition = pos;
    m_songIterator->toFront();
    while (m_songIterator->hasNext() &&
          (m_songIterator->next().getEvent()->getTick() < pos));
    if (m_songIterator->hasPrevious())
        m_songIterator->previous();
}

bool Player::hasNext()
{
    if (m_songIterator == NULL)
        return false;
    return m_songIterator->hasNext();
}

SequencerEvent* Player::nextEvent()
{
    if (m_songIterator == NULL)
        return NULL;
    return m_songIterator->next().getEvent();
}
