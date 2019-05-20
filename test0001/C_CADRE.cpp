/*
 * File:   C_CADRE.cpp
 * Author: flopyy
 *
 * Created on 23 janvier 2014, 12:59
 */

#include "C_CADRE.h"
#include "QString"
#include "QPixmap"

C_CADRE::C_CADRE() {
    widget.setupUi(this);
   
    QImage myImage;
    myImage.load("C:\\Users\\flopyy\\Desktop\\Downloads\\qt_logo.jpg");
    widget.label_3->setPixmap(QPixmap::fromImage(myImage));
   
}

C_CADRE::~C_CADRE() {
}

void C_CADRE::Slot_Get_Min(QString P_Min) {
    
    Min=P_Min.toInt();
    widget.verticalSlider1->setMinimum(Min);
}

void C_CADRE::Slot_Get_Max(QString P_Max) {
    
    Max=P_Max.toInt();
    widget.verticalSlider1->setMaximum(Max);
}


void C_CADRE::Slot_Recuperer_Valeur_Slider(int P_Valeur){
    
    widget.lcdNumber1->display(P_Valeur);
    
}
