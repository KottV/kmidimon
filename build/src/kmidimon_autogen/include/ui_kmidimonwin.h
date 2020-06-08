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
** Form generated from reading UI file 'kmidimonwin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KMIDIMONWIN_H
#define UI_KMIDIMONWIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KMidimonWin
{
public:
    QAction *actionShow_Toolbar;
    QAction *actionShow_Statusbar;
    QAction *actionContents;
    QAction *actionWeb_Site;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QAction *actionpepe;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuControl;
    QMenu *menuConnections;
    QMenu *menuSettings;
    QMenu *menuHelp;
    QMenu *menuLanguage;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *KMidimonWin)
    {
        if (KMidimonWin->objectName().isEmpty())
            KMidimonWin->setObjectName(QString::fromUtf8("KMidimonWin"));
        KMidimonWin->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/midi/icons/midi/icon16.png"), QSize(), QIcon::Normal, QIcon::Off);
        KMidimonWin->setWindowIcon(icon);
        actionShow_Toolbar = new QAction(KMidimonWin);
        actionShow_Toolbar->setObjectName(QString::fromUtf8("actionShow_Toolbar"));
        actionShow_Toolbar->setCheckable(true);
        actionShow_Toolbar->setChecked(true);
        actionShow_Statusbar = new QAction(KMidimonWin);
        actionShow_Statusbar->setObjectName(QString::fromUtf8("actionShow_Statusbar"));
        actionShow_Statusbar->setCheckable(true);
        actionShow_Statusbar->setChecked(true);
        actionContents = new QAction(KMidimonWin);
        actionContents->setObjectName(QString::fromUtf8("actionContents"));
        actionWeb_Site = new QAction(KMidimonWin);
        actionWeb_Site->setObjectName(QString::fromUtf8("actionWeb_Site"));
        actionAbout = new QAction(KMidimonWin);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout_Qt = new QAction(KMidimonWin);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        actionpepe = new QAction(KMidimonWin);
        actionpepe->setObjectName(QString::fromUtf8("actionpepe"));
        centralwidget = new QWidget(KMidimonWin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        KMidimonWin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(KMidimonWin);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuControl = new QMenu(menubar);
        menuControl->setObjectName(QString::fromUtf8("menuControl"));
        menuConnections = new QMenu(menubar);
        menuConnections->setObjectName(QString::fromUtf8("menuConnections"));
        menuSettings = new QMenu(menubar);
        menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuLanguage = new QMenu(menuHelp);
        menuLanguage->setObjectName(QString::fromUtf8("menuLanguage"));
        KMidimonWin->setMenuBar(menubar);
        statusbar = new QStatusBar(KMidimonWin);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        KMidimonWin->setStatusBar(statusbar);
        toolBar = new QToolBar(KMidimonWin);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        KMidimonWin->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuControl->menuAction());
        menubar->addAction(menuConnections->menuAction());
        menubar->addAction(menuSettings->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuSettings->addAction(actionShow_Toolbar);
        menuSettings->addAction(actionShow_Statusbar);
        menuSettings->addSeparator();
        menuHelp->addAction(actionContents);
        menuHelp->addAction(actionWeb_Site);
        menuHelp->addSeparator();
        menuHelp->addAction(menuLanguage->menuAction());
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionAbout_Qt);

        retranslateUi(KMidimonWin);
        QObject::connect(actionShow_Toolbar, SIGNAL(triggered(bool)), toolBar, SLOT(setVisible(bool)));
        QObject::connect(actionShow_Statusbar, SIGNAL(triggered(bool)), statusbar, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(KMidimonWin);
    } // setupUi

    void retranslateUi(QMainWindow *KMidimonWin)
    {
        KMidimonWin->setWindowTitle(QCoreApplication::translate("KMidimonWin", "MainWindow", nullptr));
        actionShow_Toolbar->setText(QCoreApplication::translate("KMidimonWin", "Show Toolbar", nullptr));
        actionShow_Statusbar->setText(QCoreApplication::translate("KMidimonWin", "Show Statusbar", nullptr));
        actionContents->setText(QCoreApplication::translate("KMidimonWin", "Contents", nullptr));
        actionWeb_Site->setText(QCoreApplication::translate("KMidimonWin", "Web Site", nullptr));
        actionAbout->setText(QCoreApplication::translate("KMidimonWin", "About...", nullptr));
        actionAbout_Qt->setText(QCoreApplication::translate("KMidimonWin", "About Qt", nullptr));
        actionpepe->setText(QCoreApplication::translate("KMidimonWin", "pepe", nullptr));
        menuFile->setTitle(QCoreApplication::translate("KMidimonWin", "File", nullptr));
        menuControl->setTitle(QCoreApplication::translate("KMidimonWin", "Control", nullptr));
        menuConnections->setTitle(QCoreApplication::translate("KMidimonWin", "Connections", nullptr));
        menuSettings->setTitle(QCoreApplication::translate("KMidimonWin", "Settings", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("KMidimonWin", "Help", nullptr));
        menuLanguage->setTitle(QCoreApplication::translate("KMidimonWin", "Language", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("KMidimonWin", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KMidimonWin: public Ui_KMidimonWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KMIDIMONWIN_H
