/* 
 * File:   C_SIGNAL.cpp
 * Author: Administrateur
 * 
 * Created on 5 décembre 2013, 15:11
 */

#include <math.h>
#include "C_SIGNAL.h"
#include "C_CADRE.h"
#include <cstdlib>
#include <new>




C_SIGNAL::C_SIGNAL(int P_Nombre_Echantillons, int P_Nombre_Harmoniques) {
    
    Nombre_Echantillons=P_Nombre_Echantillons;
    Nombre_Amplitudes = P_Nombre_Harmoniques;
    
    Periode=1.0;
   
    
    Les_X = new(std::nothrow) double [Nombre_Echantillons];
    Les_Y = new(std::nothrow) double [Nombre_Echantillons];
    Amplitudes = new(std::nothrow) double [Nombre_Amplitudes];
    
    
    Regle_Periode(Periode);
     
    for (int L_Harmonique=0; L_Harmonique<Nombre_Amplitudes; L_Harmonique++){
            Amplitudes[L_Harmonique]=0.0;
    }
    
}

//-----------------------------------------------------------------------------
C_SIGNAL::~C_SIGNAL() {
    if (Les_X) delete[] Les_X;
    if (Les_Y) delete[] Les_Y;
    if (Amplitudes) delete[] Amplitudes;
    
}
//-----------------------------------------------------------------------------
void C_SIGNAL::Regle_Periode(double P_Periode)
{
 Periode=P_Periode;
 double L_Pas = (Periode*2.0)/(float)Nombre_Echantillons;
 double L_T=0.0;
 
   for (int L_Index=0; L_Index<Nombre_Echantillons; L_Index++){
      // Les_X[L_Index]= L_Index;
 
       Les_X[L_Index]= L_T;
       L_T += L_Pas;
    }  
}
//-----------------------------------------------------------------------------

void C_SIGNAL::Calcule_Toi()
{
 double L_T=0.0;
  double L_Pas = (Periode*2.0*M_PI)/(float)Nombre_Echantillons; 
  
    for (int L_Index=0; L_Index<Nombre_Echantillons; L_Index++){
        Les_Y[L_Index]=0.0;
        for (int L_Harmonique=0; L_Harmonique<Nombre_Amplitudes; L_Harmonique++){
            Les_Y[L_Index] += Amplitudes[L_Harmonique]* sin ( (L_Harmonique+1)* L_T);
        }
        
 //       Les_Y[L_Index]=Amplitudes[0]*sin(L_T);
        L_T += L_Pas;
    }
}
//-----------------------------------------------------------------------------

const double* C_SIGNAL::Get_Les_X()
{
    return Les_X;
}
//-----------------------------------------------------------------------------

const double* C_SIGNAL::Get_Les_Y()
{
    return Les_Y;
}
//-----------------------------------------------------------------------------

void C_SIGNAL::Set_Harmonique(int P_Numero, double P_Amplitude)
{
    if ( (P_Numero>=0) and (P_Numero<Nombre_Amplitudes) ){
        Amplitudes[P_Numero]=P_Amplitude;
    }
}
//*****************************************************************************
