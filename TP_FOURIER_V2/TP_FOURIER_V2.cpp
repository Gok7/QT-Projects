/*
 * File:   TP_FOURIER_V2.cpp
 * Author: Administrateur
 *
 * Created on 11 décembre 2013, 16:27
 */

#include <QApplication>
#include "C_CADRE.h"
#include "C_SIGNAL.h"
#include "DEFINES.h"

int main(int argc, char *argv[]) {


    QApplication app(argc, argv);
    C_CADRE Le_Cadre;
    
    C_SIGNAL Le_Signal(NOMBRE_ECHANTILLONS, NOMBRE_HARMONIQUES);
    
    Le_Cadre.Set_Le_Signal(&Le_Signal);
    
    Le_Cadre.show();
    


    return app.exec();
}
