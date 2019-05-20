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
#include "qwt_knob.h"
#include "qwt_plot.h"
#include "qwt_slider.h"

QT_BEGIN_NAMESPACE

class Ui_C_CADRE
{
public:
    QAction *actionQuitter;
    QWidget *centralwidget;
    QwtPlot *Le_graphe;
    QwtSlider *Slider_amplitude;
    QwtSlider *Slider_Periode;
    QwtKnob *Truc_rond;
    QMenuBar *menubar;
    QMenu *menuFichier;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *C_CADRE)
    {
        if (C_CADRE->objectName().isEmpty())
            C_CADRE->setObjectName(QStringLiteral("C_CADRE"));
        C_CADRE->resize(800, 600);
        actionQuitter = new QAction(C_CADRE);
        actionQuitter->setObjectName(QStringLiteral("actionQuitter"));
        centralwidget = new QWidget(C_CADRE);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        Le_graphe = new QwtPlot(centralwidget);
        Le_graphe->setObjectName(QStringLiteral("Le_graphe"));
        Le_graphe->setGeometry(QRect(0, 20, 431, 291));
        Slider_amplitude = new QwtSlider(centralwidget);
        Slider_amplitude->setObjectName(QStringLiteral("Slider_amplitude"));
        Slider_amplitude->setGeometry(QRect(470, 40, 61, 251));
        Slider_amplitude->setUpperBound(1);
        Slider_amplitude->setValue(1);
        Slider_Periode = new QwtSlider(centralwidget);
        Slider_Periode->setObjectName(QStringLiteral("Slider_Periode"));
        Slider_Periode->setGeometry(QRect(550, 40, 71, 251));
        Slider_Periode->setUpperBound(2);
        Slider_Periode->setValue(2);
        Truc_rond = new QwtKnob(centralwidget);
        Truc_rond->setObjectName(QStringLiteral("Truc_rond"));
        Truc_rond->setGeometry(QRect(480, 320, 141, 141));
        C_CADRE->setCentralWidget(centralwidget);
        menubar = new QMenuBar(C_CADRE);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 18));
        menuFichier = new QMenu(menubar);
        menuFichier->setObjectName(QStringLiteral("menuFichier"));
        C_CADRE->setMenuBar(menubar);
        statusbar = new QStatusBar(C_CADRE);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        C_CADRE->setStatusBar(statusbar);

        menubar->addAction(menuFichier->menuAction());
        menuFichier->addAction(actionQuitter);

        retranslateUi(C_CADRE);
        QObject::connect(actionQuitter, SIGNAL(triggered()), C_CADRE, SLOT(close()));
        QObject::connect(Slider_amplitude, SIGNAL(valueChanged(double)), C_CADRE, SLOT(Slot_Slider_Change_Amplitude(double)));

        QMetaObject::connectSlotsByName(C_CADRE);
    } // setupUi

    void retranslateUi(QMainWindow *C_CADRE)
    {
        C_CADRE->setWindowTitle(QApplication::translate("C_CADRE", "C_CADRE", 0));
        actionQuitter->setText(QApplication::translate("C_CADRE", "Quitter", 0));
        menuFichier->setTitle(QApplication::translate("C_CADRE", "Fichier", 0));
    } // retranslateUi

};

namespace Ui {
    class C_CADRE: public Ui_C_CADRE {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_C_CADRE_H
