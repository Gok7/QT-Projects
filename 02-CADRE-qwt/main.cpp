/*
 * File:   main.cpp
 * Author: flopyy
 *
 * Created on 4 décembre 2013, 14:50
 */

#include <QApplication>
#include "C_CADRE.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);
    int L_resultat;
    QApplication app(argc, argv);
    
    C_CADRE Fenetre_Pricipale;
    Fenetre_Pricipale.show();
    // create and show your widgets here

    L_resultat= app.exec();
    
    
    //fin reseau
    
    return L_resultat;
}

//faire : recuperer donnée slider et afficher dans la list
//faire  : rajouter un autre slider, recuperer l'ancien code avec buffer circulaire,
//client UDP permettant d'envoyer les données du slider