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

QT_BEGIN_NAMESPACE

class Ui_C_CADRE
{
public:
    QAction *action_Quitter;
    QAction *action_Ouvrir;
    QAction *action_Enregister_Sous;
    QWidget *centralwidget;
    C_BOUTON *pushButton;
    QMenuBar *menubar;
    QMenu *menu_Fichier;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *C_CADRE)
    {
        if (C_CADRE->objectName().isEmpty())
            C_CADRE->setObjectName(QStringLiteral("C_CADRE"));
        C_CADRE->resize(800, 600);
        action_Quitter = new QAction(C_CADRE);
        action_Quitter->setObjectName(QStringLiteral("action_Quitter"));
        action_Ouvrir = new QAction(C_CADRE);
        action_Ouvrir->setObjectName(QStringLiteral("action_Ouvrir"));
        action_Enregister_Sous = new QAction(C_CADRE);
        action_Enregister_Sous->setObjectName(QStringLiteral("action_Enregister_Sous"));
        centralwidget = new QWidget(C_CADRE);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new C_BOUTON(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 160, 75, 23));
        C_CADRE->setCentralWidget(centralwidget);
        menubar = new QMenuBar(C_CADRE);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 18));
        menu_Fichier = new QMenu(menubar);
        menu_Fichier->setObjectName(QStringLiteral("menu_Fichier"));
        C_CADRE->setMenuBar(menubar);
        statusbar = new QStatusBar(C_CADRE);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        C_CADRE->setStatusBar(statusbar);

        menubar->addAction(menu_Fichier->menuAction());
        menu_Fichier->addAction(action_Quitter);
        menu_Fichier->addAction(action_Ouvrir);
        menu_Fichier->addAction(action_Enregister_Sous);

        retranslateUi(C_CADRE);

        QMetaObject::connectSlotsByName(C_CADRE);
    } // setupUi

    void retranslateUi(QMainWindow *C_CADRE)
    {
        C_CADRE->setWindowTitle(QApplication::translate("C_CADRE", "C_CADRE", 0));
        action_Quitter->setText(QApplication::translate("C_CADRE", "&Quitter", 0));
        action_Ouvrir->setText(QApplication::translate("C_CADRE", "&Ouvrir", 0));
        action_Enregister_Sous->setText(QApplication::translate("C_CADRE", "&Enregister Sous", 0));
        pushButton->setText(QApplication::translate("C_CADRE", "PushButton", 0));
        menu_Fichier->setTitle(QApplication::translate("C_CADRE", "&Fichier", 0));
    } // retranslateUi

};

namespace Ui {
    class C_CADRE: public Ui_C_CADRE {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_C_CADRE_H
