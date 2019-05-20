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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_C_CADRE
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QFrame *line;
    QListWidget *Liste_Info1;
    QListWidget *Liste_Info2;
    QLineEdit *A2_V1;
    QLineEdit *A2_V2;
    QLineEdit *A2_V3;
    QLineEdit *A1_V1;
    QLineEdit *A1_V2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *C_CADRE)
    {
        if (C_CADRE->objectName().isEmpty())
            C_CADRE->setObjectName(QStringLiteral("C_CADRE"));
        C_CADRE->resize(674, 277);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(C_CADRE->sizePolicy().hasHeightForWidth());
        C_CADRE->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(C_CADRE);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(70, 30, 75, 23));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 150, 75, 23));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(350, 120, 46, 13));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(350, 160, 46, 13));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(350, 190, 46, 13));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(350, 70, 46, 13));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(350, 30, 46, 13));
        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(20, 90, 621, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        Liste_Info1 = new QListWidget(centralwidget);
        Liste_Info1->setObjectName(QStringLiteral("Liste_Info1"));
        Liste_Info1->setGeometry(QRect(430, 30, 201, 41));
        Liste_Info2 = new QListWidget(centralwidget);
        Liste_Info2->setObjectName(QStringLiteral("Liste_Info2"));
        Liste_Info2->setGeometry(QRect(430, 140, 201, 41));
        A2_V1 = new QLineEdit(centralwidget);
        A2_V1->setObjectName(QStringLiteral("A2_V1"));
        A2_V1->setGeometry(QRect(210, 130, 113, 20));
        A2_V1->setMaxLength(11);
        A2_V2 = new QLineEdit(centralwidget);
        A2_V2->setObjectName(QStringLiteral("A2_V2"));
        A2_V2->setGeometry(QRect(210, 160, 113, 20));
        A2_V2->setMaxLength(11);
        A2_V3 = new QLineEdit(centralwidget);
        A2_V3->setObjectName(QStringLiteral("A2_V3"));
        A2_V3->setGeometry(QRect(210, 190, 113, 20));
        A2_V3->setCursor(QCursor(Qt::IBeamCursor));
        A2_V3->setFocusPolicy(Qt::StrongFocus);
        A2_V3->setMaxLength(10);
        A2_V3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        A2_V3->setCursorMoveStyle(Qt::LogicalMoveStyle);
        A1_V1 = new QLineEdit(centralwidget);
        A1_V1->setObjectName(QStringLiteral("A1_V1"));
        A1_V1->setGeometry(QRect(210, 30, 113, 20));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(A1_V1->sizePolicy().hasHeightForWidth());
        A1_V1->setSizePolicy(sizePolicy1);
        A1_V1->setMaxLength(11);
        A1_V2 = new QLineEdit(centralwidget);
        A1_V2->setObjectName(QStringLiteral("A1_V2"));
        A1_V2->setGeometry(QRect(210, 60, 113, 20));
        A1_V2->setMaxLength(11);
        C_CADRE->setCentralWidget(centralwidget);
        menubar = new QMenuBar(C_CADRE);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 674, 18));
        C_CADRE->setMenuBar(menubar);
        statusbar = new QStatusBar(C_CADRE);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        C_CADRE->setStatusBar(statusbar);

        retranslateUi(C_CADRE);
        QObject::connect(pushButton, SIGNAL(clicked()), C_CADRE, SLOT(Slot_Info_A1()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), C_CADRE, SLOT(Slot_Info_A2()));

        QMetaObject::connectSlotsByName(C_CADRE);
    } // setupUi

    void retranslateUi(QMainWindow *C_CADRE)
    {
        C_CADRE->setWindowTitle(QApplication::translate("C_CADRE", "C_CADRE", 0));
        pushButton->setText(QApplication::translate("C_CADRE", "Action1", 0));
        pushButton_2->setText(QApplication::translate("C_CADRE", "Action2", 0));
        label->setText(QApplication::translate("C_CADRE", "v1", 0));
        label_2->setText(QApplication::translate("C_CADRE", "v2", 0));
        label_3->setText(QApplication::translate("C_CADRE", "v3", 0));
        label_4->setText(QApplication::translate("C_CADRE", "v2", 0));
        label_5->setText(QApplication::translate("C_CADRE", "v1", 0));
        A2_V1->setInputMask(QApplication::translate("C_CADRE", "#9999999999", 0));
        A2_V2->setInputMask(QApplication::translate("C_CADRE", "#9999999999", 0));
        A2_V3->setInputMask(QApplication::translate("C_CADRE", "9999999999", 0));
        A1_V1->setInputMask(QApplication::translate("C_CADRE", "#9999999999", 0));
        A1_V2->setInputMask(QApplication::translate("C_CADRE", "#9999999999", 0));
    } // retranslateUi

};

namespace Ui {
    class C_CADRE: public Ui_C_CADRE {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_C_CADRE_H
