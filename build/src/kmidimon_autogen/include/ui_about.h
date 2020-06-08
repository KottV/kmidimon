/*

KMetronome - ALSA Sequencer based MIDI metronome
Copyright (C) 2005-2020 Pedro Lopez-Cabanillas <plcl@users.sourceforge.net>

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.
 
*/

/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutClass
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelIcon;
    QLabel *labelVersion;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QLabel *labelName;
    QLabel *label;
    QLabel *labelCopyright;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AboutClass)
    {
        if (AboutClass->objectName().isEmpty())
            AboutClass->setObjectName(QString::fromUtf8("AboutClass"));
        AboutClass->resize(506, 548);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/midi/icons/midi/icon16.png"), QSize(), QIcon::Normal, QIcon::Off);
        AboutClass->setWindowIcon(icon);
        AboutClass->setSizeGripEnabled(true);
        AboutClass->setModal(true);
        verticalLayout = new QVBoxLayout(AboutClass);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        labelIcon = new QLabel(AboutClass);
        labelIcon->setObjectName(QString::fromUtf8("labelIcon"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelIcon->sizePolicy().hasHeightForWidth());
        labelIcon->setSizePolicy(sizePolicy);
        labelIcon->setMinimumSize(QSize(160, 160));
        labelIcon->setMaximumSize(QSize(160, 160));
        labelIcon->setPixmap(QPixmap(QString::fromUtf8(":/midi/icons/midi/icon128.png")));
        labelIcon->setScaledContents(false);
        labelIcon->setAlignment(Qt::AlignCenter);
        labelIcon->setWordWrap(false);
        labelIcon->setMargin(10);
        labelIcon->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout->addWidget(labelIcon);

        labelVersion = new QLabel(AboutClass);
        labelVersion->setObjectName(QString::fromUtf8("labelVersion"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelVersion->sizePolicy().hasHeightForWidth());
        labelVersion->setSizePolicy(sizePolicy1);
        labelVersion->setMinimumSize(QSize(280, 170));
        labelVersion->setTextFormat(Qt::RichText);
        labelVersion->setWordWrap(true);
        labelVersion->setMargin(10);
        labelVersion->setOpenExternalLinks(true);

        horizontalLayout->addWidget(labelVersion);


        verticalLayout->addLayout(horizontalLayout);

        scrollArea = new QScrollArea(AboutClass);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setMinimumSize(QSize(500, 0));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 498, 342));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(3, 3, 3, 3);
        labelName = new QLabel(scrollAreaWidgetContents);
        labelName->setObjectName(QString::fromUtf8("labelName"));

        gridLayout->addWidget(labelName, 0, 0, 1, 1);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        label->setOpenExternalLinks(true);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        labelCopyright = new QLabel(scrollAreaWidgetContents);
        labelCopyright->setObjectName(QString::fromUtf8("labelCopyright"));
        sizePolicy.setHeightForWidth(labelCopyright->sizePolicy().hasHeightForWidth());
        labelCopyright->setSizePolicy(sizePolicy);
        labelCopyright->setMinimumSize(QSize(0, 277));
        labelCopyright->setTextFormat(Qt::RichText);
        labelCopyright->setWordWrap(true);
        labelCopyright->setOpenExternalLinks(true);

        gridLayout->addWidget(labelCopyright, 2, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        buttonBox = new QDialogButtonBox(AboutClass);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AboutClass);
        QObject::connect(buttonBox, SIGNAL(rejected()), AboutClass, SLOT(close()));

        QMetaObject::connectSlotsByName(AboutClass);
    } // setupUi

    void retranslateUi(QDialog *AboutClass)
    {
        AboutClass->setWindowTitle(QCoreApplication::translate("AboutClass", "About", nullptr));
        labelName->setText(QCoreApplication::translate("AboutClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:600;\">Drumstick MIDI Monitor</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("AboutClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"https://kmidimon.sourceforge.io\"><span style=\" text-decoration: underline; color:#007af4;\">https://kmidimon.sourceforge.io</span></a></p></body></html>", nullptr));
        labelCopyright->setText(QCoreApplication::translate("AboutClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif';\">Copyright \302\251 2002-2020, </span><a href=\"mailto:plcl@users.sf.net?subject=VMPK\"><span style=\" font-family:'Sans Serif'; font-size:9pt; text-decoration: underline; color:#0057ae;\">Pedro Lopez-Cabanillas &lt;plcl@users.sf.net&gt;</span></a></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans';\">This program is free software; you can redistribute it under the terms of the GNU General Public Li"
                        "cense as published by the Free Software Foundation; either version 2 of the License, or (at your option) any later version.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans';\">This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans';\">You should have received a copy of the GNU General Public License along with this program; if not, see </span><a href=\"https://www.gnu.org/licenses/\"><span style=\" text-decoration: underline; color:#007af4;\">https://www.gnu.org/licenses/</span></a></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutClass: public Ui_AboutClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
