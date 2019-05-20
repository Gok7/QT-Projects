/*
 * File:   main.cpp
 * Author: flopyy
 *
 * Created on 12 décembre 2013, 08:44
 */

#include <QApplication>
#include "C_CADRE.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);
    
    C_CADRE Fenetre_Principale;

    
    Fenetre_Principale.show();
    // create and show your widgets here

    return app.exec();
}
