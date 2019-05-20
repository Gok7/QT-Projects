/* 
 * File:   C_SLIDER.cpp
 * Author: Administrateur
 * 
 * Created on 11 décembre 2013, 16:30
 */

#include "C_SLIDER.h"

C_SLIDER::C_SLIDER(QWidget* P_Parent) 
         :QSlider(P_Parent)
{
}
//------------------------------------------------------------------------------

void C_SLIDER::sliderChange(SliderChange P_Changement)
{
  QSlider::sliderChange(P_Changement);
  if (P_Changement==SliderValueChange)  emit  Signal_Valeur_Changee(ID, value()); 
  
}