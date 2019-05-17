#include "mainwindow.h"
#include <QApplication>
#include "sinus.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Sinus sinus;
    sinus.setGeometry (300, 300, 200, 200);
    sinus.show();
    return a.exec();
}
