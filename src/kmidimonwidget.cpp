/***************************************************************************
 *   KMidimon - ALSA sequencer based MIDI monitor                          *
 *   Copyright (C) 2005-2008 Pedro Lopez-Cabanillas                        *
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

#include <qlabel.h>
#include <qlistview.h>
#include <qfile.h>
#include <qtextstream.h>
#include <klistview.h>
#include <kglobalsettings.h>
#include <kmainwindow.h>

#include "fancylistviewitem.h"
#include "kmidimonwidget.h"
#include "sequencerclient.h"

KMidimonWidget::KMidimonWidget(QWidget* parent, const char* name, WFlags fl) :
	KMidimonWidgetBase(parent, name, fl)
{
	m_useFixedFont = false;
	m_sortEvents = false;
	m_font = KGlobalSettings::generalFont();

	eventListView->setSorting(-1);
	eventListView->setColumnWidthMode(0, QListView::Maximum);
	eventListView->setColumnWidthMode(1, QListView::Maximum);
	eventListView->setColumnWidthMode(2, QListView::Maximum);
	eventListView->setColumnWidthMode(3, QListView::Maximum);
	eventListView->setColumnWidthMode(4, QListView::Maximum);
	eventListView->setColumnWidthMode(5, QListView::Maximum);

	eventListView->setColumnAlignment(0, Qt::AlignRight);
	eventListView->setColumnAlignment(1, Qt::AlignRight);
	eventListView->setColumnAlignment(2, Qt::AlignLeft);
	eventListView->setColumnAlignment(3, Qt::AlignRight);
	eventListView->setColumnAlignment(4, Qt::AlignRight);
	eventListView->setColumnAlignment(5, Qt::AlignLeft);

	eventListView->setItemMargin(2);

	eventListView->setSelectionMode(QListView::NoSelection);
	//eventListView->setResizeMode(QListView::LastColumn);
}

KMidimonWidget::~KMidimonWidget()
{
}

void KMidimonWidget::clear()
{
	eventListView->clear();
}

void KMidimonWidget::add(MidiEvent *ev)
{
	FancyListViewItem *k = new FancyListViewItem( eventListView,
			ev->getTime(),
			ev->getSource(),
			ev->getKind(),
			ev->getChannel(),
			ev->getData1(),
			ev->getData2() );
	k->setFont(m_font );
	eventListView->ensureItemVisible(k );
}

void KMidimonWidget::saveTo(QString path)
{
	QFile file(path);
	file.open(IO_WriteOnly);
	QTextStream stream(&file);
	QListViewItemIterator it(eventListView );
	while (it.current() )
	{
		QListViewItem *item = it.current();
		stream << item->text(0).stripWhiteSpace() << ","<< item->text(1).stripWhiteSpace() << ","<< item->text(2).stripWhiteSpace() << ","<< item->text(3).stripWhiteSpace() << ","<< item->text(4).stripWhiteSpace() << ","<< item->text(5).stripWhiteSpace() << endl;
		++it;
	}
	file.close();
}

void KMidimonWidget::setFixedFont(bool newValue)
{
	if (m_useFixedFont != newValue)
	{
		m_useFixedFont = newValue;
		if (m_useFixedFont)
		{
			m_font = KGlobalSettings::fixedFont();
		}
		else
		{
			m_font = KGlobalSettings::generalFont();
		}
	}
}

void KMidimonWidget::setShowColumn(int colNum, bool newValue)
{
	if (colNum < 0 || colNum > 5)return;
	if (newValue)
	{
		eventListView->setColumnWidthMode(colNum, QListView::Maximum);
		eventListView->setColumnWidth(colNum, 80);
	}
	else
	{
		eventListView->setColumnWidthMode(colNum, QListView::Manual);
		eventListView->setColumnWidth(colNum, 0);
	}
}

void KMidimonWidget::setSortEvents(bool newValue)
{
	if (m_sortEvents!= newValue)
	{
		m_sortEvents = newValue;
		if (m_sortEvents)
		{
			eventListView->setSorting(0, true);
		}
		else
		{
			eventListView->setSorting(-1);
		}
		eventListView->sort();
	}
}

#include "kmidimonwidget.moc"
