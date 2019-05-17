#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "chargement.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QWidget *pic = new QWidget(this);
        pic->setStyleSheet("background-image: url(:imgs/digimetrie_logo_1.png)");
        pic->setGeometry(QRect(75,75,211,31));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Checkbox_clicked(bool checked)
{

}
void MainWindow::on_pushButton_clicked()
{
    chargement();
}
