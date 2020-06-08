/*

KMidimon - ALSA Sequencer based MIDI Monitor
Copyright (C) 2005-2020 Pedro Lopez-Cabanillas <plcl@users.sourceforge.net>

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.

*/

/********************************************************************************
** Form generated from reading UI file 'configdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGDIALOGBASE_H
#define UI_CONFIGDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigDialogBase
{
public:
    QGridLayout *gridLayout_3;
    QTabWidget *m_tabWidget;
    QWidget *tabSequencer;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *lblTempo;
    QSpinBox *m_tempo;
    QLabel *lblResolution;
    QSpinBox *m_resolution;
    QSpacerItem *verticalSpacer_2;
    QCheckBox *m_requestRealtime;
    QWidget *tabFilters;
    QGridLayout *gridLayout_4;
    QLabel *label_2;
    QCheckBox *m_channel;
    QCheckBox *m_common;
    QCheckBox *m_realtime;
    QCheckBox *m_sysex;
    QCheckBox *m_alsa;
    QCheckBox *m_smfmsg;
    QSpacerItem *verticalSpacer_3;
    QWidget *tabDisplay;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QCheckBox *m_showTicksColumn;
    QCheckBox *m_showTimeColumn;
    QCheckBox *m_showSourceColumn;
    QCheckBox *m_showEventTypeColumn;
    QCheckBox *m_showChannelColumn;
    QCheckBox *m_showData1Column;
    QCheckBox *m_showData2Column;
    QCheckBox *m_showData3Column;
    QSpacerItem *verticalSpacer_4;
    QWidget *tabMisc;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QCheckBox *m_useFixedFont;
    QCheckBox *m_showClientNames;
    QCheckBox *m_translateSysex;
    QCheckBox *m_translateNotes;
    QCheckBox *m_translateCtrls;
    QLabel *lblInstrument;
    QComboBox *m_instruments;
    QSpacerItem *verticalSpacer_5;
    QLabel *lblCodec;
    QComboBox *m_codecs;
    QCheckBox *m_resizeColumns;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ConfigDialogBase)
    {
        if (ConfigDialogBase->objectName().isEmpty())
            ConfigDialogBase->setObjectName(QString::fromUtf8("ConfigDialogBase"));
        ConfigDialogBase->resize(400, 340);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ConfigDialogBase->sizePolicy().hasHeightForWidth());
        ConfigDialogBase->setSizePolicy(sizePolicy);
        ConfigDialogBase->setMinimumSize(QSize(400, 340));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/midi/icons/midi/icon16.png"), QSize(), QIcon::Normal, QIcon::Off);
        ConfigDialogBase->setWindowIcon(icon);
        ConfigDialogBase->setSizeGripEnabled(true);
        gridLayout_3 = new QGridLayout(ConfigDialogBase);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        m_tabWidget = new QTabWidget(ConfigDialogBase);
        m_tabWidget->setObjectName(QString::fromUtf8("m_tabWidget"));
        tabSequencer = new QWidget();
        tabSequencer->setObjectName(QString::fromUtf8("tabSequencer"));
        gridLayout = new QGridLayout(tabSequencer);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(tabSequencer);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lblTempo = new QLabel(tabSequencer);
        lblTempo->setObjectName(QString::fromUtf8("lblTempo"));
        lblTempo->setWordWrap(false);

        gridLayout->addWidget(lblTempo, 1, 0, 1, 1);

        m_tempo = new QSpinBox(tabSequencer);
        m_tempo->setObjectName(QString::fromUtf8("m_tempo"));
        m_tempo->setMinimum(24);
        m_tempo->setMaximum(480);

        gridLayout->addWidget(m_tempo, 1, 1, 1, 1);

        lblResolution = new QLabel(tabSequencer);
        lblResolution->setObjectName(QString::fromUtf8("lblResolution"));
        lblResolution->setWordWrap(false);

        gridLayout->addWidget(lblResolution, 2, 0, 1, 1);

        m_resolution = new QSpinBox(tabSequencer);
        m_resolution->setObjectName(QString::fromUtf8("m_resolution"));
        m_resolution->setMinimum(48);
        m_resolution->setMaximum(960);

        gridLayout->addWidget(m_resolution, 2, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 4, 0, 1, 2);

        m_requestRealtime = new QCheckBox(tabSequencer);
        m_requestRealtime->setObjectName(QString::fromUtf8("m_requestRealtime"));

        gridLayout->addWidget(m_requestRealtime, 3, 0, 1, 2);

        m_tabWidget->addTab(tabSequencer, QString());
        tabFilters = new QWidget();
        tabFilters->setObjectName(QString::fromUtf8("tabFilters"));
        gridLayout_4 = new QGridLayout(tabFilters);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_2 = new QLabel(tabFilters);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout_4->addWidget(label_2, 0, 0, 1, 1);

        m_channel = new QCheckBox(tabFilters);
        m_channel->setObjectName(QString::fromUtf8("m_channel"));

        gridLayout_4->addWidget(m_channel, 1, 0, 1, 1);

        m_common = new QCheckBox(tabFilters);
        m_common->setObjectName(QString::fromUtf8("m_common"));

        gridLayout_4->addWidget(m_common, 2, 0, 1, 1);

        m_realtime = new QCheckBox(tabFilters);
        m_realtime->setObjectName(QString::fromUtf8("m_realtime"));

        gridLayout_4->addWidget(m_realtime, 3, 0, 1, 1);

        m_sysex = new QCheckBox(tabFilters);
        m_sysex->setObjectName(QString::fromUtf8("m_sysex"));

        gridLayout_4->addWidget(m_sysex, 4, 0, 1, 1);

        m_alsa = new QCheckBox(tabFilters);
        m_alsa->setObjectName(QString::fromUtf8("m_alsa"));

        gridLayout_4->addWidget(m_alsa, 5, 0, 1, 1);

        m_smfmsg = new QCheckBox(tabFilters);
        m_smfmsg->setObjectName(QString::fromUtf8("m_smfmsg"));

        gridLayout_4->addWidget(m_smfmsg, 6, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 46, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_3, 7, 0, 1, 1);

        m_tabWidget->addTab(tabFilters, QString());
        tabDisplay = new QWidget();
        tabDisplay->setObjectName(QString::fromUtf8("tabDisplay"));
        verticalLayout = new QVBoxLayout(tabDisplay);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(tabDisplay);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        font1.setKerning(false);
        label_3->setFont(font1);

        verticalLayout->addWidget(label_3);

        m_showTicksColumn = new QCheckBox(tabDisplay);
        m_showTicksColumn->setObjectName(QString::fromUtf8("m_showTicksColumn"));

        verticalLayout->addWidget(m_showTicksColumn);

        m_showTimeColumn = new QCheckBox(tabDisplay);
        m_showTimeColumn->setObjectName(QString::fromUtf8("m_showTimeColumn"));

        verticalLayout->addWidget(m_showTimeColumn);

        m_showSourceColumn = new QCheckBox(tabDisplay);
        m_showSourceColumn->setObjectName(QString::fromUtf8("m_showSourceColumn"));

        verticalLayout->addWidget(m_showSourceColumn);

        m_showEventTypeColumn = new QCheckBox(tabDisplay);
        m_showEventTypeColumn->setObjectName(QString::fromUtf8("m_showEventTypeColumn"));

        verticalLayout->addWidget(m_showEventTypeColumn);

        m_showChannelColumn = new QCheckBox(tabDisplay);
        m_showChannelColumn->setObjectName(QString::fromUtf8("m_showChannelColumn"));

        verticalLayout->addWidget(m_showChannelColumn);

        m_showData1Column = new QCheckBox(tabDisplay);
        m_showData1Column->setObjectName(QString::fromUtf8("m_showData1Column"));

        verticalLayout->addWidget(m_showData1Column);

        m_showData2Column = new QCheckBox(tabDisplay);
        m_showData2Column->setObjectName(QString::fromUtf8("m_showData2Column"));

        verticalLayout->addWidget(m_showData2Column);

        m_showData3Column = new QCheckBox(tabDisplay);
        m_showData3Column->setObjectName(QString::fromUtf8("m_showData3Column"));

        verticalLayout->addWidget(m_showData3Column);

        verticalSpacer_4 = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        m_tabWidget->addTab(tabDisplay, QString());
        tabMisc = new QWidget();
        tabMisc->setObjectName(QString::fromUtf8("tabMisc"));
        gridLayout_2 = new QGridLayout(tabMisc);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_4 = new QLabel(tabMisc);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout_2->addWidget(label_4, 0, 0, 1, 2);

        m_useFixedFont = new QCheckBox(tabMisc);
        m_useFixedFont->setObjectName(QString::fromUtf8("m_useFixedFont"));

        gridLayout_2->addWidget(m_useFixedFont, 1, 0, 1, 1);

        m_showClientNames = new QCheckBox(tabMisc);
        m_showClientNames->setObjectName(QString::fromUtf8("m_showClientNames"));

        gridLayout_2->addWidget(m_showClientNames, 3, 0, 1, 2);

        m_translateSysex = new QCheckBox(tabMisc);
        m_translateSysex->setObjectName(QString::fromUtf8("m_translateSysex"));

        gridLayout_2->addWidget(m_translateSysex, 4, 0, 1, 2);

        m_translateNotes = new QCheckBox(tabMisc);
        m_translateNotes->setObjectName(QString::fromUtf8("m_translateNotes"));

        gridLayout_2->addWidget(m_translateNotes, 5, 0, 1, 2);

        m_translateCtrls = new QCheckBox(tabMisc);
        m_translateCtrls->setObjectName(QString::fromUtf8("m_translateCtrls"));

        gridLayout_2->addWidget(m_translateCtrls, 6, 0, 1, 2);

        lblInstrument = new QLabel(tabMisc);
        lblInstrument->setObjectName(QString::fromUtf8("lblInstrument"));
        lblInstrument->setEnabled(true);

        gridLayout_2->addWidget(lblInstrument, 8, 0, 1, 1);

        m_instruments = new QComboBox(tabMisc);
        m_instruments->setObjectName(QString::fromUtf8("m_instruments"));
        m_instruments->setEnabled(true);

        gridLayout_2->addWidget(m_instruments, 8, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_5, 10, 0, 1, 2);

        lblCodec = new QLabel(tabMisc);
        lblCodec->setObjectName(QString::fromUtf8("lblCodec"));

        gridLayout_2->addWidget(lblCodec, 9, 0, 1, 1);

        m_codecs = new QComboBox(tabMisc);
        m_codecs->setObjectName(QString::fromUtf8("m_codecs"));

        gridLayout_2->addWidget(m_codecs, 9, 1, 1, 1);

        m_resizeColumns = new QCheckBox(tabMisc);
        m_resizeColumns->setObjectName(QString::fromUtf8("m_resizeColumns"));

        gridLayout_2->addWidget(m_resizeColumns, 2, 0, 1, 2);

        m_tabWidget->addTab(tabMisc, QString());

        gridLayout_3->addWidget(m_tabWidget, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(ConfigDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_3->addWidget(buttonBox, 1, 0, 1, 1);

#if QT_CONFIG(shortcut)
        lblTempo->setBuddy(m_tempo);
        lblResolution->setBuddy(m_resolution);
        lblInstrument->setBuddy(m_instruments);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ConfigDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), ConfigDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ConfigDialogBase, SLOT(reject()));

        m_tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(ConfigDialogBase);
    } // setupUi

    void retranslateUi(QDialog *ConfigDialogBase)
    {
        label->setText(QCoreApplication::translate("ConfigDialogBase", "Queue Default Settings", nullptr));
        lblTempo->setText(QCoreApplication::translate("ConfigDialogBase", "Tempo (BPM)", nullptr));
#if QT_CONFIG(whatsthis)
        m_tempo->setWhatsThis(QCoreApplication::translate("ConfigDialogBase", "The number of beats per minute, or music speed. This is a default value; MIDI files may change this value.", nullptr));
#endif // QT_CONFIG(whatsthis)
        lblResolution->setText(QCoreApplication::translate("ConfigDialogBase", "Resolution", nullptr));
#if QT_CONFIG(whatsthis)
        m_resolution->setWhatsThis(QCoreApplication::translate("ConfigDialogBase", "The number of MIDI ticks per quarter note. This is a default value; a MIDI file (SMF) may change this value.", nullptr));
#endif // QT_CONFIG(whatsthis)
        m_requestRealtime->setText(QCoreApplication::translate("ConfigDialogBase", "Request realtime priority for MIDI input", nullptr));
        m_tabWidget->setTabText(m_tabWidget->indexOf(tabSequencer), QCoreApplication::translate("ConfigDialogBase", "Sequencer", nullptr));
        label_2->setText(QCoreApplication::translate("ConfigDialogBase", "Filter Message Types", nullptr));
#if QT_CONFIG(whatsthis)
        m_channel->setWhatsThis(QCoreApplication::translate("ConfigDialogBase", "MIDI Channel messages include: Note On/Off, Control Change, Program Change, Pitch Wheel, Key and Channel Pressure.", nullptr));
#endif // QT_CONFIG(whatsthis)
        m_channel->setText(QCoreApplication::translate("ConfigDialogBase", "MIDI Channel Messages", nullptr));
#if QT_CONFIG(whatsthis)
        m_common->setWhatsThis(QCoreApplication::translate("ConfigDialogBase", "System common messages are: quarter frame, song position and tune request.", nullptr));
#endif // QT_CONFIG(whatsthis)
        m_common->setText(QCoreApplication::translate("ConfigDialogBase", "MIDI System Common Messages", nullptr));
#if QT_CONFIG(whatsthis)
        m_realtime->setWhatsThis(QCoreApplication::translate("ConfigDialogBase", "System realtime messages are: clock, start, continue, stop, active sensing and reset.", nullptr));
#endif // QT_CONFIG(whatsthis)
        m_realtime->setText(QCoreApplication::translate("ConfigDialogBase", "MIDI System Real-Time Messages", nullptr));
#if QT_CONFIG(whatsthis)
        m_sysex->setWhatsThis(QCoreApplication::translate("ConfigDialogBase", "System exclusive messages can be: universal and manufacturer defined.", nullptr));
#endif // QT_CONFIG(whatsthis)
        m_sysex->setText(QCoreApplication::translate("ConfigDialogBase", "MIDI System Exclusive Messages", nullptr));
#if QT_CONFIG(whatsthis)
        m_alsa->setWhatsThis(QCoreApplication::translate("ConfigDialogBase", "ALSA Messages are: client and port start/exit, and connection changes.", nullptr));
#endif // QT_CONFIG(whatsthis)
        m_alsa->setText(QCoreApplication::translate("ConfigDialogBase", "ALSA Messages", nullptr));
#if QT_CONFIG(whatsthis)
        m_smfmsg->setWhatsThis(QCoreApplication::translate("ConfigDialogBase", "Standard MIDI file (SMF) messages include: key/time signature and text messages", nullptr));
#endif // QT_CONFIG(whatsthis)
        m_smfmsg->setText(QCoreApplication::translate("ConfigDialogBase", "SMF Messages", nullptr));
        m_tabWidget->setTabText(m_tabWidget->indexOf(tabFilters), QCoreApplication::translate("ConfigDialogBase", "Filters", nullptr));
        label_3->setText(QCoreApplication::translate("ConfigDialogBase", "Show Columns", nullptr));
#if QT_CONFIG(whatsthis)
        m_showTicksColumn->setWhatsThis(QCoreApplication::translate("ConfigDialogBase", "Ticks are the musical time units. It is relative to tempo and resolution.", nullptr));
#endif // QT_CONFIG(whatsthis)
        m_showTicksColumn->setText(QCoreApplication::translate("ConfigDialogBase", "Ticks", nullptr));
#if QT_CONFIG(whatsthis)
        m_showTimeColumn->setWhatsThis(QCoreApplication::translate("ConfigDialogBase", "Seconds are absolute time units", nullptr));
#endif // QT_CONFIG(whatsthis)
        m_showTimeColumn->setText(QCoreApplication::translate("ConfigDialogBase", "Time (in seconds)", nullptr));
#if QT_CONFIG(whatsthis)
        m_showSourceColumn->setWhatsThis(QCoreApplication::translate("ConfigDialogBase", "MIDI port originating the messages", nullptr));
#endif // QT_CONFIG(whatsthis)
        m_showSourceColumn->setText(QCoreApplication::translate("ConfigDialogBase", "Source", "Origin of the event"));
#if QT_CONFIG(whatsthis)
        m_showEventTypeColumn->setWhatsThis(QCoreApplication::translate("ConfigDialogBase", "Message type displayed as a text string", nullptr));
#endif // QT_CONFIG(whatsthis)
        m_showEventTypeColumn->setText(QCoreApplication::translate("ConfigDialogBase", "Message Type", nullptr));
#if QT_CONFIG(whatsthis)
        m_showChannelColumn->setWhatsThis(QCoreApplication::translate("ConfigDialogBase", "MIDI Channel (1 to 16)", nullptr));
#endif // QT_CONFIG(whatsthis)
        m_showChannelColumn->setText(QCoreApplication::translate("ConfigDialogBase", "Channel", "MIDI Channel Number"));
#if QT_CONFIG(whatsthis)
        m_showData1Column->setWhatsThis(QCoreApplication::translate("ConfigDialogBase", "Parameter data depending on the message type", nullptr));
#endif // QT_CONFIG(whatsthis)
        m_showData1Column->setText(QCoreApplication::translate("ConfigDialogBase", "Data 1", nullptr));
#if QT_CONFIG(whatsthis)
        m_showData2Column->setWhatsThis(QCoreApplication::translate("ConfigDialogBase", "Parameter data depending on the message type", nullptr));
#endif // QT_CONFIG(whatsthis)
        m_showData2Column->setText(QCoreApplication::translate("ConfigDialogBase", "Data 2", nullptr));
#if QT_CONFIG(whatsthis)
        m_showData3Column->setWhatsThis(QCoreApplication::translate("ConfigDialogBase", "Parameter data depending on the message type", nullptr));
#endif // QT_CONFIG(whatsthis)
        m_showData3Column->setText(QCoreApplication::translate("ConfigDialogBase", "Data 3", nullptr));
        m_tabWidget->setTabText(m_tabWidget->indexOf(tabDisplay), QCoreApplication::translate("ConfigDialogBase", "Display", "Columns to show"));
        label_4->setText(QCoreApplication::translate("ConfigDialogBase", "Miscellaneous Options", nullptr));
#if QT_CONFIG(whatsthis)
        m_useFixedFont->setWhatsThis(QCoreApplication::translate("ConfigDialogBase", "The font used in the event grid can be fixed or variable, taken from the KDE fonts configuration (kcmshell4 fonts).", nullptr));
#endif // QT_CONFIG(whatsthis)
        m_useFixedFont->setText(QCoreApplication::translate("ConfigDialogBase", "Use Fixed Font", nullptr));
#if QT_CONFIG(whatsthis)
        m_showClientNames->setWhatsThis(QCoreApplication::translate("ConfigDialogBase", "Display ALSA client numbers or Names", nullptr));
#endif // QT_CONFIG(whatsthis)
        m_showClientNames->setText(QCoreApplication::translate("ConfigDialogBase", "Translate ALSA Client IDs Into Names", nullptr));
#if QT_CONFIG(whatsthis)
        m_translateSysex->setWhatsThis(QCoreApplication::translate("ConfigDialogBase", "Display some Universal Sysex messages as text, or hexadecimal numbers", nullptr));
#endif // QT_CONFIG(whatsthis)
        m_translateSysex->setText(QCoreApplication::translate("ConfigDialogBase", "Translate Universal SysEx Messages", nullptr));
        m_translateNotes->setText(QCoreApplication::translate("ConfigDialogBase", "Translate Note Numbers into Names", nullptr));
        m_translateCtrls->setText(QCoreApplication::translate("ConfigDialogBase", "Translate MIDI Programs and Controllers", nullptr));
        lblInstrument->setText(QCoreApplication::translate("ConfigDialogBase", "MIDI Instrument", nullptr));
        lblCodec->setText(QCoreApplication::translate("ConfigDialogBase", "SMF Text Encoding", nullptr));
        m_resizeColumns->setText(QCoreApplication::translate("ConfigDialogBase", "Resize columns automatically while recording events", nullptr));
        m_tabWidget->setTabText(m_tabWidget->indexOf(tabMisc), QCoreApplication::translate("ConfigDialogBase", "Misc", nullptr));
        (void)ConfigDialogBase;
    } // retranslateUi

};

namespace Ui {
    class ConfigDialogBase: public Ui_ConfigDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGDIALOGBASE_H
