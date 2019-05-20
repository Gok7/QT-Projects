/*
 * File:   C_CADRE.cpp
 * Author: flopyy
 *
 * Created on 5 décembre 2013, 11:07
 */

#include "C_CADRE.h"
#include "QTimer"

C_CADRE::C_CADRE() {
    widget.setupUi(this);

    Le_Timer = new QTimer(this);
    QObject::connect(Le_Timer, SIGNAL(timeout()), this, SLOT(Slot_affiche_coucou()));
    Timer_en_marche = false;
    Le_Timer->setInterval(widget.Slider->value());// pour la 1ere fois sinon
    //timer ne prend pas en compte le slider au debut
}

C_CADRE::~C_CADRE() {
}

void C_CADRE::Slot_affiche_coucou() {
    widget.listWidget->addItem("coucou");
    widget.listWidget->scrollToBottom();
}

void C_CADRE::Slot_marche_arret() {

    Timer_en_marche = (!Timer_en_marche);

    if (Timer_en_marche) {
        Le_Timer->start();
        widget.Bouton_Marche_Arret->setText("Arreter");
    } else {
        Le_Timer->stop();
        widget.Bouton_Marche_Arret->setText("Lancer");
    }
}

void C_CADRE::Slot_reglage_timer(double P_interval){
        
    Le_Timer->setInterval(P_interval);
}