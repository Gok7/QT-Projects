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
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "qwt_slider.h"

QT_BEGIN_NAMESPACE

class Ui_C_CADRE
{
public:
    QWidget *centralwidget;
    QListWidget *listWidget;
    QPushButton *Bouton_Marche_Arret;
    QLCDNumber *lcdNumber;
    QwtSlider *Slider;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *C_CADRE)
    {
        if (C_CADRE->objectName().isEmpty())
            C_CADRE->setObjectName(QStringLiteral("C_CADRE"));
        C_CADRE->resize(800, 600);
        centralwidget = new QWidget(C_CADRE);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(30, 30, 256, 192));
        Bouton_Marche_Arret = new QPushButton(centralwidget);
        Bouton_Marche_Arret->setObjectName(QStringLiteral("Bouton_Marche_Arret"));
        Bouton_Marche_Arret->setGeometry(QRect(350, 90, 75, 23));
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(220, 230, 64, 23));
        Slider = new QwtSlider(centralwidget);
        Slider->setObjectName(QStringLiteral("Slider"));
        Slider->setGeometry(QRect(440, 40, 71, 181));
        Slider->setUpperBound(2000);
        Slider->setValue(1000);
        C_CADRE->setCentralWidget(centralwidget);
        menubar = new QMenuBar(C_CADRE);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 18));
        C_CADRE->setMenuBar(menubar);
        statusbar = new QStatusBar(C_CADRE);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        C_CADRE->setStatusBar(statusbar);

        retranslateUi(C_CADRE);
        QObject::connect(Bouton_Marche_Arret, SIGNAL(clicked()), C_CADRE, SLOT(Slot_marche_arret()));
        QObject::connect(Slider, SIGNAL(valueChanged(double)), lcdNumber, SLOT(display(double)));
        QObject::connect(Slider, SIGNAL(valueChanged(double)), C_CADRE, SLOT(Slot_reglage_timer(double)));

        QMetaObject::connectSlotsByName(C_CADRE);
    } // setupUi

    void retranslateUi(QMainWindow *C_CADRE)
    {
        C_CADRE->setWindowTitle(QApplication::translate("C_CADRE", "C_CADRE", 0));
        Bouton_Marche_Arret->setText(QApplication::translate("C_CADRE", "Lancer", 0));
    } // retranslateUi

};

namespace Ui {
    class C_CADRE: public Ui_C_CADRE {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_C_CADRE_H
