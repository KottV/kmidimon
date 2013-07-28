/***************************************************************************
 *   KMidimon - ALSA sequencer based MIDI monitor                          *
 *   Copyright (C) 2005-2013 Pedro Lopez-Cabanillas                        *
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

#ifndef CONNECTDLG_H
#define CONNECTDLG_H

#include <kdialog.h>

class QGroupBox;
class QStringList;
class KComboBox;

 class ConnectDlg : public KDialog
{
    Q_OBJECT

 public:
    ConnectDlg( QWidget *parent,
                const QStringList& inputs,
                const QStringList& subs,
                const QStringList& outputs,
                const QString& out);

    QStringList getSelectedInputs() const;
    QString getSelectedOutput() const;

private:
    QGroupBox* m_group;
    KComboBox* m_output;
};

#endif
