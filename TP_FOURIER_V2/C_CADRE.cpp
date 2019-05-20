/*
 * File:   C_CADRE.cpp
 * Author: Administrateur
 *
 * Created on 11 décembre 2013, 16:28
 */

#include "C_CADRE.h"
#include "DEFINES_1.h"
#include <QFileDialog>

#include <fstream>
using namespace std;

C_CADRE::C_CADRE() {
    widget.setupUi(this);
    
    La_Courbe = new QwtPlotCurve;   
    La_Courbe->attach(widget.Le_Graphe);
    
}
//------------------------------------------------------------------------------
C_CADRE::~C_CADRE() {
}
//------------------------------------------------------------------------------
void C_CADRE::Affiche_Courbe()
{
  le_Signal->Calcule_Toi();
 
  La_Courbe->setSamples( le_Signal->Get_Les_X(), 
                         le_Signal->Get_Les_Y(), 
                         le_Signal->Get_Nombre_Echantillons());
 
   widget.Le_Graphe->replot(); 
    
}

//------------------------------------------------------------------------------
void C_CADRE::Slot_Changement_Amplitude(int P_ID, int P_Valeur)
{
   
     double L_Amplitude = P_Valeur/100.0f;
     le_Signal->Set_Harmonique(P_ID, L_Amplitude);
     Affiche_Courbe();  
}

//------------------------------------------------------------------------------
void C_CADRE::Set_Le_Signal(C_SIGNAL* P_Signal)
{
    le_Signal = P_Signal;
}

//------------------------------------------------------------------------------
void C_CADRE::Slot_Change_Periode(double P_Valeur)
{
 le_Signal->Regle_Periode(P_Valeur);
  Affiche_Courbe();  
    
}
//------------------------------------------------------------------------------
void C_CADRE::Slot_Sauver()
{
QString L_Nom_Fichier=  QFileDialog::getSaveFileName(this, "Sauver fichier",
                           ".",
                           "Tous (*.*)");

   if (L_Nom_Fichier !=""){
       fstream L_Fichier; 
       L_Fichier.open(L_Nom_Fichier.toStdString().c_str(),ios::out);
       
       L_Fichier<<le_Signal->Get_Periode()<<endl;
       for (int L_Index=0; L_Index<NOMBRE_HARMONIQUES; L_Index++){
           L_Fichier<<le_Signal->Get_Harmoniques()[L_Index]<<" ";
       }

   }
}

//------------------------------------------------------------------------------

void C_CADRE::Slot_Ouvrir()
{
 QString L_Nom_Fichier= QFileDialog::getOpenFileName(this,"Ouvrir fichier", 
                        ".", "Tous les fichiers (*.*);; Texte (*.txt)");
    if (L_Nom_Fichier !=""){
  
         fstream L_Fichier; 
       L_Fichier.open(L_Nom_Fichier.toStdString().c_str(),ios::in);
       double L_Valeur;
       
       L_Fichier>>L_Valeur;
       le_Signal->Regle_Periode(L_Valeur);
       widget.Reglage_Periode->setValue(L_Valeur );
       
       
       for (int L_Index=0; L_Index<NOMBRE_HARMONIQUES; L_Index++){
           L_Fichier>>L_Valeur;
          le_Signal->Set_Harmonique(L_Index, L_Valeur);
       }
       
       Affiche_Courbe();
     
    QString L_Nom_Slider="Harmonique_"; 
    for (int L_Index=0; L_Index<NOMBRE_HARMONIQUES; L_Index++) {
      
         C_SLIDER* L_Slider=widget.centralwidget->findChild<C_SLIDER*>
                     (L_Nom_Slider+QString::number(L_Index));
         
         if (L_Slider) L_Slider->setValue(le_Signal->Get_Harmoniques()[L_Index]*100.0f );
    }
       
    }
  }
    
    

