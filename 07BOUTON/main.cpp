/*
 * File:   main.cpp
 * Author: flopyy
 *
 * Created on 11 décembre 2013, 15:14
 */

#include <QApplication>

#include "C_FENETRE.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    C_FENETRE Ma_Fenetre;
    Ma_Fenetre.show();
    // create and show your widgets here

    return app.exec();
}
