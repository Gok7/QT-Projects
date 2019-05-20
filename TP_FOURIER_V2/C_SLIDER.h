/* 
 * File:   C_SLIDER.h
 * Author: Administrateur
 *
 * Created on 11 décembre 2013, 16:30
 */

#ifndef C_SLIDER_H
#define	C_SLIDER_H

#include "QSlider"


class C_SLIDER : public QSlider {
     Q_OBJECT
     Q_PROPERTY(int ID READ Get_ID WRITE Set_ID)
     
public:
    C_SLIDER(QWidget* P_Parent);
    inline void Set_ID(int P_ID);
    inline int Get_ID();

protected :
    int ID;
    void sliderChange(SliderChange P_Changement);
signals :
     void Signal_Valeur_Changee(int P_ID, int P_Valeur);    
  
};

//================================================================================
 void C_SLIDER::Set_ID(int P_ID)
 {       
        ID=P_ID;
 }
 
 //-----------------------------------------------------------------------------
 int C_SLIDER::Get_ID() {
        return ID;
  }
 
#endif	/* C_SLIDER_H */

