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
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_C_CADRE
{
public:
    QAction *action_Quitter;
    QWidget *centralwidget;
    QLineEdit *Text_URL1;
    QPushButton *GO;
    QWebView *Zone_Web;
    QMenuBar *menubar;
    QMenu *menu_Fichier;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *C_CADRE)
    {
        if (C_CADRE->objectName().isEmpty())
            C_CADRE->setObjectName(QStringLiteral("C_CADRE"));
        C_CADRE->resize(789, 585);
        action_Quitter = new QAction(C_CADRE);
        action_Quitter->setObjectName(QStringLiteral("action_Quitter"));
        centralwidget = new QWidget(C_CADRE);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        Text_URL1 = new QLineEdit(centralwidget);
        Text_URL1->setObjectName(QStringLiteral("Text_URL1"));
        Text_URL1->setGeometry(QRect(40, 0, 241, 31));
        GO = new QPushButton(centralwidget);
        GO->setObjectName(QStringLiteral("GO"));
        GO->setGeometry(QRect(290, 10, 75, 23));
        Zone_Web = new QWebView(centralwidget);
        Zone_Web->setObjectName(QStringLiteral("Zone_Web"));
        Zone_Web->setGeometry(QRect(10, 40, 771, 501));
        Zone_Web->setUrl(QUrl(QStringLiteral("about:blank")));
        C_CADRE->setCentralWidget(centralwidget);
        menubar = new QMenuBar(C_CADRE);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 789, 18));
        menu_Fichier = new QMenu(menubar);
        menu_Fichier->setObjectName(QStringLiteral("menu_Fichier"));
        C_CADRE->setMenuBar(menubar);
        statusbar = new QStatusBar(C_CADRE);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        C_CADRE->setStatusBar(statusbar);

        menubar->addAction(menu_Fichier->menuAction());
        menu_Fichier->addAction(action_Quitter);

        retranslateUi(C_CADRE);
        QObject::connect(action_Quitter, SIGNAL(triggered()), C_CADRE, SLOT(close()));
        QObject::connect(GO, SIGNAL(clicked()), C_CADRE, SLOT(Slot_GO()));

        QMetaObject::connectSlotsByName(C_CADRE);
    } // setupUi

    void retranslateUi(QMainWindow *C_CADRE)
    {
        C_CADRE->setWindowTitle(QApplication::translate("C_CADRE", "C_CADRE", 0));
        action_Quitter->setText(QApplication::translate("C_CADRE", "&Quitter", 0));
        GO->setText(QApplication::translate("C_CADRE", "GO", 0));
        menu_Fichier->setTitle(QApplication::translate("C_CADRE", "&Fichier", 0));
    } // retranslateUi

};

namespace Ui {
    class C_CADRE: public Ui_C_CADRE {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_C_CADRE_H
