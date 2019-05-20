/*
 * File:   C_CADRE.cpp
 * Author: flopyy
 *
 * Created on 12 décembre 2013, 14:04
 */

#include "C_CADRE.h"

C_CADRE::C_CADRE() {
    widget.setupUi(this);
}

C_CADRE::~C_CADRE() {
}

void C_CADRE::Slot_GO(){
    
    QString L_URL;
    L_URL=widget.Text_URL1->text();
    widget.Zone_Web->setUrl(L_URL);
}