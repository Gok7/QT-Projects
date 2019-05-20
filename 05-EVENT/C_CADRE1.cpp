/*
 * File:   C_CADRE1.cpp
 * Author: flopyy
 *
 * Created on 5 décembre 2013, 16:48
 */

#include "C_CADRE1.h"
#include <QFileDialog>
#include <string.h>
#include "QMessageBox"
#include "QDataStream"
C_CADRE1::C_CADRE1() {
    widget.setupUi(this);
}

C_CADRE1::~C_CADRE1() {
}

void C_CADRE1::mousePressEvent(QMouseEvent* P_event) {

    widget.listWidget->addItem(__PRETTY_FUNCTION__);
    widget.listWidget->scrollToBottom();
    
}

void C_CADRE1::Slot_Gestion_Fichier_Ouvrir() {

    QString Open_fileName = QFileDialog::getOpenFileName(this,
            tr("Open"), "C:\\Users\\flopyy\\Test_Prog\\Save",
            tr("fourier files(*.fourier)"));

    if (Open_fileName.isEmpty() == false) {
        widget.listWidget->addItem(Open_fileName);
    }
}

void C_CADRE1::Slot_Gestion_Fichier_Enregistrer() {

    QString Save_fileName = QFileDialog::getSaveFileName(this, tr("Save File"),
            "C:\\Users\\flopyy\\Test_Prog\\Save",
            tr("fourier files(*.fourier)"));

    if (Save_fileName.isEmpty() == false) {

        QFile file(Save_fileName);
        if (!file.open(QIODevice::WriteOnly)) {
            QMessageBox::information(this, tr("Unable to open file"),
                    file.errorString());
            return;
        }
        QDataStream out(&file);
        out.setVersion(QDataStream::Qt_5_1);
        out << "123";
        widget.listWidget->addItem(Save_fileName);
    }
}

void C_CADRE1::Slot_b(){
    
        widget.listWidget->addItem("encule");

}

//findchild pour changer de slider sur une collection de slider



















//ouvrir doit afficher une boite de dialogue 
//selectionner le fichier
//Qdialog
//afficher dans la boite de dialogue

//pour mercredi : truc de fourier dans un fichier texte;
//2 option -> enregistrer et ouvrir
//getOpenFileName
//getSaveFileName

//idée : mettre les valeurs de slider dans un buffer
//copier ce buffer dans un fichier pour enregistrement
//pour ouverture : lire le fichier, mettre les données du buffer
//reploter tous ça comme un homme

//faire une classe C_BOUTON a partir de Qbutton
//heritage de Qbutton

//quand on click dessus, on change de couleur.
//widget promus
//declarer sa classe
//Qpushboutton : nom de la classe de base
//coté code : class