/********************************************************************************
** Form generated from reading UI file 'C_CADRE1.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_C_CADRE1_H
#define UI_C_CADRE1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "qwt_slider.h"

QT_BEGIN_NAMESPACE

class Ui_C_CADRE1
{
public:
    QAction *actionOuvrir;
    QAction *actionEnregister_sous;
    QWidget *centralwidget;
    QListWidget *listWidget;
    QwtSlider *Slider;
    QPushButton *boutton;
    QMenuBar *menubar;
    QMenu *menu_Ficher;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *C_CADRE1)
    {
        if (C_CADRE1->objectName().isEmpty())
            C_CADRE1->setObjectName(QStringLiteral("C_CADRE1"));
        C_CADRE1->resize(800, 600);
        actionOuvrir = new QAction(C_CADRE1);
        actionOuvrir->setObjectName(QStringLiteral("actionOuvrir"));
        actionEnregister_sous = new QAction(C_CADRE1);
        actionEnregister_sous->setObjectName(QStringLiteral("actionEnregister_sous"));
        centralwidget = new QWidget(C_CADRE1);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(70, 80, 256, 192));
        Slider = new QwtSlider(centralwidget);
        Slider->setObjectName(QStringLiteral("Slider"));
        Slider->setGeometry(QRect(400, 80, 61, 191));
        Slider->setUpperBound(1);
        Slider->setValue(0.5);
        boutton = new QPushButton(centralwidget);
        boutton->setObjectName(QStringLiteral("boutton"));
        boutton->setGeometry(QRect(420, 320, 75, 23));
        C_CADRE1->setCentralWidget(centralwidget);
        menubar = new QMenuBar(C_CADRE1);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 18));
        menu_Ficher = new QMenu(menubar);
        menu_Ficher->setObjectName(QStringLiteral("menu_Ficher"));
        C_CADRE1->setMenuBar(menubar);
        statusbar = new QStatusBar(C_CADRE1);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        C_CADRE1->setStatusBar(statusbar);

        menubar->addAction(menu_Ficher->menuAction());
        menu_Ficher->addAction(actionOuvrir);
        menu_Ficher->addAction(actionEnregister_sous);

        retranslateUi(C_CADRE1);
        QObject::connect(actionOuvrir, SIGNAL(triggered()), C_CADRE1, SLOT(Slot_Gestion_Fichier_Ouvrir()));
        QObject::connect(actionEnregister_sous, SIGNAL(triggered()), C_CADRE1, SLOT(Slot_Gestion_Fichier_Enregistrer()));
        QObject::connect(boutton, SIGNAL(clicked()), C_CADRE1, SLOT(Slot_b()));

        QMetaObject::connectSlotsByName(C_CADRE1);
    } // setupUi

    void retranslateUi(QMainWindow *C_CADRE1)
    {
        C_CADRE1->setWindowTitle(QApplication::translate("C_CADRE1", "C_CADRE1", 0));
        actionOuvrir->setText(QApplication::translate("C_CADRE1", "Ouvrir...", 0));
        actionEnregister_sous->setText(QApplication::translate("C_CADRE1", "Enregister sous...", 0));
        boutton->setText(QApplication::translate("C_CADRE1", "PushButton", 0));
        menu_Ficher->setTitle(QApplication::translate("C_CADRE1", "&Ficher", 0));
    } // retranslateUi

};

namespace Ui {
    class C_CADRE1: public Ui_C_CADRE1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_C_CADRE1_H
