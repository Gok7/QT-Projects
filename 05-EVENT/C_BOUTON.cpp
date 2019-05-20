/* 
 * File:   C_BOUTON.cpp
 * Author: flopyy
 * 
 * Created on 11 décembre 2013, 14:06
 */

#include "C_BOUTON.h"

C_BOUTON::C_BOUTON(QWidget * P_parent)
: QPushButton(P_parent) {
    
    
}

void C_BOUTON::mousePressEvent(QMouseEvent* P_event){
    
    QPushButton::mousePressEvent(P_event);
    
    
}
