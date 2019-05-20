/*
 * File:   C_CADRE.cpp
 * Author: flopyy
 *
 * Created on 4 décembre 2013, 15:35
 */

#include "C_CADRE.h"

C_CADRE::C_CADRE() {
    widget.setupUi(this);
}

C_CADRE::~C_CADRE() {
}

void C_CADRE::Slot_Info(){
    
    widget.listWidget->addItem(QString("coucou"));   
}

void C_CADRE::Slot_Info(int &P_valeur){
    
     widget.listWidget->addItem(QString::number(P_valeur));  

}
