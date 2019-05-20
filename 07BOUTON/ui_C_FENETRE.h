/********************************************************************************
** Form generated from reading UI file 'C_FENETRE.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_C_FENETRE_H
#define UI_C_FENETRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "c_bouton.h"

QT_BEGIN_NAMESPACE

class Ui_C_FENETRE
{
public:
    QWidget *centralwidget;
    QListWidget *Liste_Info;
    C_BOUTON *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *C_FENETRE)
    {
        if (C_FENETRE->objectName().isEmpty())
            C_FENETRE->setObjectName(QStringLiteral("C_FENETRE"));
        C_FENETRE->resize(800, 600);
        centralwidget = new QWidget(C_FENETRE);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        Liste_Info = new QListWidget(centralwidget);
        Liste_Info->setObjectName(QStringLiteral("Liste_Info"));
        Liste_Info->setGeometry(QRect(20, 20, 491, 192));
        pushButton = new C_BOUTON(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(540, 90, 75, 23));
        pushButton->setProperty("ID", QVariant(200));
        C_FENETRE->setCentralWidget(centralwidget);
        menubar = new QMenuBar(C_FENETRE);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 18));
        C_FENETRE->setMenuBar(menubar);
        statusbar = new QStatusBar(C_FENETRE);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        C_FENETRE->setStatusBar(statusbar);

        retranslateUi(C_FENETRE);

        QMetaObject::connectSlotsByName(C_FENETRE);
    } // setupUi

    void retranslateUi(QMainWindow *C_FENETRE)
    {
        C_FENETRE->setWindowTitle(QApplication::translate("C_FENETRE", "C_FENETRE", 0));
        pushButton->setText(QApplication::translate("C_FENETRE", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class C_FENETRE: public Ui_C_FENETRE {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_C_FENETRE_H
