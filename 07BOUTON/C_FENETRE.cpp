/*
 * File:   C_FENETRE.cpp
 * Author: flopyy
 *
 * Created on 11 décembre 2013, 15:14
 */

#include "C_FENETRE.h"

C_FENETRE::C_FENETRE() {
    widget.setupUi(this);
}

C_FENETRE::~C_FENETRE() {
}

void C_FENETRE::Slot_Info_1(int P_Valeur) {
    QString L_Message;
    L_Message = "Bas";
    L_Message += QString::number(P_Valeur);
    widget.Liste_Info->addItem(L_Message);

}

void C_FENETRE::Slot_Info_2(int P_Valeur) {
    QString L_Message;
    L_Message = "Haut";
    L_Message += QString::number(P_Valeur);
    widget.Liste_Info->addItem(L_Message);

}