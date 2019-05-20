/*
 * File:   C_CADRE.cpp
 * Author: flopyy
 *
 * Created on 12 décembre 2013, 14:04
 */

#include "C_CADRE.h"
#include "QString"
#include "QtCore"
#include "QTcpSocket"
#include "QObject"

C_CADRE::C_CADRE() {
    widget.setupUi(this);

    QObject::connect(Le_Socket, SIGNAL(connected()), this, SLOT(Slot_Connexion()));
    Le_Socket.write("GET /. \n\r");
}

C_CADRE::~C_CADRE() {
}

void C_CADRE::Slot_Connexion() {

    Le_Socket.connectToHost()

}

void C_CADRE::Slot_Deconnexion() {

//    Le_Socket.disconnectfromhost();

}
