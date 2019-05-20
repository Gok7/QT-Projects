/*
 * File:   main.cpp
 * Author: flopyy
 *
 * Created on 23 janvier 2014, 12:58
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
