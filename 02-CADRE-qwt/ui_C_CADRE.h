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
#include <QtWidgets/QDial>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "qwt_plot.h"

QT_BEGIN_NAMESPACE

class Ui_C_CADRE
{
public:
    QAction *actionQuitter;
    QAction *action_Test;
    QWidget *centralwidget;
    QSlider *Le_Slider;
    QProgressBar *progressBar;
    QLCDNumber *lcdNumber;
    QDial *dial;
    QListWidget *listWidget;
    QPushButton *pushButton;
    QwtPlot *qwtPlot;
    QMenuBar *menubar;
    QMenu *menuFichier;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *C_CADRE)
    {
        if (C_CADRE->objectName().isEmpty())
            C_CADRE->setObjectName(QStringLiteral("C_CADRE"));
        C_CADRE->resize(548, 601);
        C_CADRE->setStyleSheet(QLatin1String("\n"
"background-color: rgb(132, 132, 132);"));
        actionQuitter = new QAction(C_CADRE);
        actionQuitter->setObjectName(QStringLiteral("actionQuitter"));
        action_Test = new QAction(C_CADRE);
        action_Test->setObjectName(QStringLiteral("action_Test"));
        centralwidget = new QWidget(C_CADRE);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        Le_Slider = new QSlider(centralwidget);
        Le_Slider->setObjectName(QStringLiteral("Le_Slider"));
        Le_Slider->setGeometry(QRect(60, 60, 16, 160));
        Le_Slider->setLayoutDirection(Qt::LeftToRight);
        Le_Slider->setMaximum(100);
        Le_Slider->setOrientation(Qt::Vertical);
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(100, 60, 21, 161));
        progressBar->setAutoFillBackground(false);
        progressBar->setStyleSheet(QStringLiteral("background-color: rgb(0, 85, 255);"));
        progressBar->setValue(0);
        progressBar->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        progressBar->setTextVisible(true);
        progressBar->setOrientation(Qt::Vertical);
        progressBar->setInvertedAppearance(false);
        progressBar->setTextDirection(QProgressBar::TopToBottom);
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(60, 240, 64, 23));
        lcdNumber->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
""));
        lcdNumber->setDigitCount(3);
        dial = new QDial(centralwidget);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setGeometry(QRect(160, 180, 111, 91));
        dial->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        dial->setMaximum(100);
        listWidget = new QListWidget(centralwidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(270, 30, 201, 141));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(370, 210, 75, 23));
        qwtPlot = new QwtPlot(centralwidget);
        qwtPlot->setObjectName(QStringLiteral("qwtPlot"));
        qwtPlot->setGeometry(QRect(50, 320, 400, 200));
        C_CADRE->setCentralWidget(centralwidget);
        menubar = new QMenuBar(C_CADRE);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 548, 18));
        menuFichier = new QMenu(menubar);
        menuFichier->setObjectName(QStringLiteral("menuFichier"));
        C_CADRE->setMenuBar(menubar);
        statusbar = new QStatusBar(C_CADRE);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        C_CADRE->setStatusBar(statusbar);

        menubar->addAction(menuFichier->menuAction());
        menuFichier->addAction(action_Test);
        menuFichier->addSeparator();
        menuFichier->addAction(actionQuitter);

        retranslateUi(C_CADRE);
        QObject::connect(actionQuitter, SIGNAL(triggered()), C_CADRE, SLOT(close()));
        QObject::connect(Le_Slider, SIGNAL(valueChanged(int)), progressBar, SLOT(setValue(int)));
        QObject::connect(Le_Slider, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));
        QObject::connect(dial, SIGNAL(valueChanged(int)), Le_Slider, SLOT(setValue(int)));
        QObject::connect(dial, SIGNAL(valueChanged(int)), progressBar, SLOT(setValue(int)));
        QObject::connect(dial, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));
        QObject::connect(Le_Slider, SIGNAL(valueChanged(int)), dial, SLOT(setValue(int)));
        QObject::connect(pushButton, SIGNAL(clicked()), C_CADRE, SLOT(Slot_Info()));

        QMetaObject::connectSlotsByName(C_CADRE);
    } // setupUi

    void retranslateUi(QMainWindow *C_CADRE)
    {
        C_CADRE->setWindowTitle(QApplication::translate("C_CADRE", "Test01", 0));
        actionQuitter->setText(QApplication::translate("C_CADRE", "&Quitter", 0));
        action_Test->setText(QApplication::translate("C_CADRE", "&Test", 0));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("C_CADRE", "text", 0));
        listWidget->setSortingEnabled(__sortingEnabled);

        pushButton->setText(QApplication::translate("C_CADRE", "PushButton", 0));
        menuFichier->setTitle(QApplication::translate("C_CADRE", "&Fichier", 0));
    } // retranslateUi

};

namespace Ui {
    class C_CADRE: public Ui_C_CADRE {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_C_CADRE_H
