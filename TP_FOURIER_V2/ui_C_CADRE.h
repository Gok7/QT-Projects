/********************************************************************************
** Form generated from reading UI file 'C_CADRE.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_C_CADRE_H
#define UI_C_CADRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "c_slider.h"
#include "qwt_knob.h"
#include "qwt_plot.h"

QT_BEGIN_NAMESPACE

class Ui_Fenetre
{
public:
    QAction *action_Quitter;
    QAction *action_Sauver;
    QAction *action_Ouvrir;
    QWidget *centralwidget;
    C_SLIDER *Harmonique_0;
    C_SLIDER *Harmonique_1;
    C_SLIDER *Harmonique_2;
    C_SLIDER *Harmonique_3;
    C_SLIDER *Harmonique_4;
    C_SLIDER *Harmonique_5;
    C_SLIDER *Harmonique_6;
    C_SLIDER *Harmonique_7;
    C_SLIDER *Harmonique_8;
    C_SLIDER *Harmonique_9;
    QwtPlot *Le_Graphe;
    QwtKnob *Reglage_Periode;
    QMenuBar *menubar;
    QMenu *menu_Fichier;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Fenetre)
    {
        if (Fenetre->objectName().isEmpty())
            Fenetre->setObjectName(QStringLiteral("Fenetre"));
        Fenetre->resize(546, 402);
        Fenetre->setProperty("ID", QVariant(100));
        action_Quitter = new QAction(Fenetre);
        action_Quitter->setObjectName(QStringLiteral("action_Quitter"));
        action_Sauver = new QAction(Fenetre);
        action_Sauver->setObjectName(QStringLiteral("action_Sauver"));
        action_Ouvrir = new QAction(Fenetre);
        action_Ouvrir->setObjectName(QStringLiteral("action_Ouvrir"));
        centralwidget = new QWidget(Fenetre);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        Harmonique_0 = new C_SLIDER(centralwidget);
        Harmonique_0->setObjectName(QStringLiteral("Harmonique_0"));
        Harmonique_0->setGeometry(QRect(20, 190, 19, 160));
        Harmonique_0->setOrientation(Qt::Vertical);
        Harmonique_0->setProperty("ID", QVariant(0));
        Harmonique_1 = new C_SLIDER(centralwidget);
        Harmonique_1->setObjectName(QStringLiteral("Harmonique_1"));
        Harmonique_1->setGeometry(QRect(60, 190, 19, 160));
        Harmonique_1->setOrientation(Qt::Vertical);
        Harmonique_1->setProperty("ID", QVariant(1));
        Harmonique_2 = new C_SLIDER(centralwidget);
        Harmonique_2->setObjectName(QStringLiteral("Harmonique_2"));
        Harmonique_2->setGeometry(QRect(100, 190, 19, 160));
        Harmonique_2->setOrientation(Qt::Vertical);
        Harmonique_2->setProperty("ID", QVariant(2));
        Harmonique_3 = new C_SLIDER(centralwidget);
        Harmonique_3->setObjectName(QStringLiteral("Harmonique_3"));
        Harmonique_3->setGeometry(QRect(140, 190, 19, 160));
        Harmonique_3->setOrientation(Qt::Vertical);
        Harmonique_3->setProperty("ID", QVariant(3));
        Harmonique_4 = new C_SLIDER(centralwidget);
        Harmonique_4->setObjectName(QStringLiteral("Harmonique_4"));
        Harmonique_4->setGeometry(QRect(180, 190, 19, 160));
        Harmonique_4->setOrientation(Qt::Vertical);
        Harmonique_4->setProperty("ID", QVariant(4));
        Harmonique_5 = new C_SLIDER(centralwidget);
        Harmonique_5->setObjectName(QStringLiteral("Harmonique_5"));
        Harmonique_5->setGeometry(QRect(220, 190, 19, 160));
        Harmonique_5->setOrientation(Qt::Vertical);
        Harmonique_5->setProperty("ID", QVariant(5));
        Harmonique_6 = new C_SLIDER(centralwidget);
        Harmonique_6->setObjectName(QStringLiteral("Harmonique_6"));
        Harmonique_6->setGeometry(QRect(260, 190, 19, 160));
        Harmonique_6->setOrientation(Qt::Vertical);
        Harmonique_6->setProperty("ID", QVariant(6));
        Harmonique_7 = new C_SLIDER(centralwidget);
        Harmonique_7->setObjectName(QStringLiteral("Harmonique_7"));
        Harmonique_7->setGeometry(QRect(300, 190, 19, 160));
        Harmonique_7->setOrientation(Qt::Vertical);
        Harmonique_7->setProperty("ID", QVariant(7));
        Harmonique_8 = new C_SLIDER(centralwidget);
        Harmonique_8->setObjectName(QStringLiteral("Harmonique_8"));
        Harmonique_8->setGeometry(QRect(340, 190, 19, 160));
        Harmonique_8->setOrientation(Qt::Vertical);
        Harmonique_8->setProperty("ID", QVariant(8));
        Harmonique_9 = new C_SLIDER(centralwidget);
        Harmonique_9->setObjectName(QStringLiteral("Harmonique_9"));
        Harmonique_9->setGeometry(QRect(380, 190, 19, 160));
        Harmonique_9->setOrientation(Qt::Vertical);
        Harmonique_9->setProperty("ID", QVariant(9));
        Le_Graphe = new QwtPlot(centralwidget);
        Le_Graphe->setObjectName(QStringLiteral("Le_Graphe"));
        Le_Graphe->setGeometry(QRect(10, 10, 400, 161));
        Reglage_Periode = new QwtKnob(centralwidget);
        Reglage_Periode->setObjectName(QStringLiteral("Reglage_Periode"));
        Reglage_Periode->setGeometry(QRect(430, 20, 91, 101));
        Reglage_Periode->setLowerBound(1);
        Reglage_Periode->setScaleMaxMajor(10);
        Reglage_Periode->setValue(1);
        Fenetre->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Fenetre);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 546, 21));
        menu_Fichier = new QMenu(menubar);
        menu_Fichier->setObjectName(QStringLiteral("menu_Fichier"));
        Fenetre->setMenuBar(menubar);
        statusbar = new QStatusBar(Fenetre);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Fenetre->setStatusBar(statusbar);

        menubar->addAction(menu_Fichier->menuAction());
        menu_Fichier->addAction(action_Ouvrir);
        menu_Fichier->addAction(action_Sauver);
        menu_Fichier->addSeparator();
        menu_Fichier->addAction(action_Quitter);

        retranslateUi(Fenetre);
        QObject::connect(action_Quitter, SIGNAL(triggered()), Fenetre, SLOT(close()));
        QObject::connect(Harmonique_0, SIGNAL(Signal_Valeur_Changee(int,int)), Fenetre, SLOT(Slot_Changement_Amplitude(int,int)));
        QObject::connect(Harmonique_1, SIGNAL(Signal_Valeur_Changee(int,int)), Fenetre, SLOT(Slot_Changement_Amplitude(int,int)));
        QObject::connect(Harmonique_2, SIGNAL(Signal_Valeur_Changee(int,int)), Fenetre, SLOT(Slot_Changement_Amplitude(int,int)));
        QObject::connect(Harmonique_3, SIGNAL(Signal_Valeur_Changee(int,int)), Fenetre, SLOT(Slot_Changement_Amplitude(int,int)));
        QObject::connect(Harmonique_4, SIGNAL(Signal_Valeur_Changee(int,int)), Fenetre, SLOT(Slot_Changement_Amplitude(int,int)));
        QObject::connect(Harmonique_5, SIGNAL(Signal_Valeur_Changee(int,int)), Fenetre, SLOT(Slot_Changement_Amplitude(int,int)));
        QObject::connect(Harmonique_6, SIGNAL(Signal_Valeur_Changee(int,int)), Fenetre, SLOT(Slot_Changement_Amplitude(int,int)));
        QObject::connect(Harmonique_7, SIGNAL(Signal_Valeur_Changee(int,int)), Fenetre, SLOT(Slot_Changement_Amplitude(int,int)));
        QObject::connect(Harmonique_8, SIGNAL(Signal_Valeur_Changee(int,int)), Fenetre, SLOT(Slot_Changement_Amplitude(int,int)));
        QObject::connect(Harmonique_9, SIGNAL(Signal_Valeur_Changee(int,int)), Fenetre, SLOT(Slot_Changement_Amplitude(int,int)));
        QObject::connect(Reglage_Periode, SIGNAL(valueChanged(double)), Fenetre, SLOT(Slot_Change_Periode(double)));
        QObject::connect(action_Sauver, SIGNAL(triggered()), Fenetre, SLOT(Slot_Sauver()));
        QObject::connect(action_Ouvrir, SIGNAL(triggered()), Fenetre, SLOT(Slot_Ouvrir()));

        QMetaObject::connectSlotsByName(Fenetre);
    } // setupUi

    void retranslateUi(QMainWindow *Fenetre)
    {
        Fenetre->setWindowTitle(QApplication::translate("Fenetre", "C_CADRE", 0));
        action_Quitter->setText(QApplication::translate("Fenetre", "&Quitter", 0));
        action_Sauver->setText(QApplication::translate("Fenetre", "&Sauver", 0));
        action_Ouvrir->setText(QApplication::translate("Fenetre", "&Ouvrir", 0));
        menu_Fichier->setTitle(QApplication::translate("Fenetre", "&Fichier", 0));
    } // retranslateUi

};

namespace Ui {
    class Fenetre: public Ui_Fenetre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_C_CADRE_H
