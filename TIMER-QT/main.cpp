/*
 * File:   main.cpp
 * Author: flopyy
 *
 * Created on 5 décembre 2013, 11:06
 */

#include <QApplication>

#include "C_CADRE.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);
    C_CADRE Fenetre;

    Fenetre.show();

    // create and show your widgets here

    return app.exec();
}
