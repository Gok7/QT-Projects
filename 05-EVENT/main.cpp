/*
 * File:   main.cpp
 * Author: flopyy
 *
 * Created on 5 décembre 2013, 14:03
 */

#include <QApplication>
#include "C_CADRE1.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);
    
    QApplication app(argc, argv);
//
    C_CADRE1 Fenetre;
    // create and show your widgets here
    Fenetre.show();
    
    int  L_resultat = app.exec();

    return L_resultat;
}
