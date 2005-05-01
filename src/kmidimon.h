/***************************************************************************
 *   KMidimon - ALSA sequencer based MIDI monitor                          *
 *   Copyright (C) 2005 by Pedro Lopez-Cabanillas                          *
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
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
/*
 * Copyright (C) 2005 Pedro Lopez-Cabanillas <plcl@users.sourceforge.net>
 */

#ifndef _KMIDIMON_H_
#define _KMIDIMON_H_

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <kmainwindow.h>
#include "sequencerclient.h"
#include "kmidimonwidget.h"

/**
 * @short Application Main Window
 * @author Pedro Lopez-Cabanillas <plcl@users.sourceforge.net>
 * @version 0.1
 */
class KMidimon : public KMainWindow
{
    Q_OBJECT
public:
    /**
     * Default Constructor
     */
    KMidimon();

    /**
     * Default Destructor
     */
    virtual ~KMidimon();
    bool queryExit();
    
public slots:
    void fileNew();
    void fileSave();
    void preferences();
    void record();
    void stop();
    void updateActions();
    void editToolbars();
    
protected:
    void customEvent( QCustomEvent * e );
    void saveConfiguration();
    void readConfiguration();
    
private:
    void setupActions();

    SequencerClient *m_client;
    KMidimonWidget *m_widget;
    KAction *m_stop;
    KAction *m_record;
    KAction *m_prefs;
    KAction *m_save;
};

#endif // _KMIDIMON_H_