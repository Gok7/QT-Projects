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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_C_CADRE
{
public:
    QWidget *centralwidget;
    QSlider *verticalSlider1;
    QLCDNumber *lcdNumber1;
    QLineEdit *Box_nombre1;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *C_CADRE)
    {
        if (C_CADRE->objectName().isEmpty())
            C_CADRE->setObjectName(QStringLiteral("C_CADRE"));
        C_CADRE->resize(800, 600);
        centralwidget = new QWidget(C_CADRE);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalSlider1 = new QSlider(centralwidget);
        verticalSlider1->setObjectName(QStringLiteral("verticalSlider1"));
        verticalSlider1->setGeometry(QRect(100, 90, 16, 160));
        verticalSlider1->setOrientation(Qt::Vertical);
        lcdNumber1 = new QLCDNumber(centralwidget);
        lcdNumber1->setObjectName(QStringLiteral("lcdNumber1"));
        lcdNumber1->setGeometry(QRect(140, 90, 64, 23));
        Box_nombre1 = new QLineEdit(centralwidget);
        Box_nombre1->setObjectName(QStringLiteral("Box_nombre1"));
        Box_nombre1->setGeometry(QRect(70, 320, 81, 21));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(70, 290, 81, 21));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 290, 46, 13));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(160, 320, 46, 13));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(640, 10, 151, 81));
        C_CADRE->setCentralWidget(centralwidget);
        menubar = new QMenuBar(C_CADRE);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 18));
        C_CADRE->setMenuBar(menubar);
        statusbar = new QStatusBar(C_CADRE);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        C_CADRE->setStatusBar(statusbar);

        retranslateUi(C_CADRE);
        QObject::connect(lineEdit, SIGNAL(textChanged(QString)), C_CADRE, SLOT(Slot_Get_Min(QString)));
        QObject::connect(Box_nombre1, SIGNAL(textChanged(QString)), C_CADRE, SLOT(Slot_Get_Max(QString)));
        QObject::connect(verticalSlider1, SIGNAL(valueChanged(int)), C_CADRE, SLOT(Slot_Recuperer_Valeur_Slider(int)));

        QMetaObject::connectSlotsByName(C_CADRE);
    } // setupUi

    void retranslateUi(QMainWindow *C_CADRE)
    {
        C_CADRE->setWindowTitle(QApplication::translate("C_CADRE", "C_CADRE", 0));
        label->setText(QApplication::translate("C_CADRE", "Min", 0));
        label_2->setText(QApplication::translate("C_CADRE", "max", 0));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class C_CADRE: public Ui_C_CADRE {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_C_CADRE_H
