/* 
 * File:   C_SIGNAL.h
 * Author: Administrateur
 *
 * Created on 5 décembre 2013, 15:11
 */

#ifndef C_SIGNAL_H
#define	C_SIGNAL_H
#include "DEFINES.h"


class C_SIGNAL {
public:
    C_SIGNAL(int P_Nombre_Echantillons, int P_Nombre_Harmoniques);
     ~C_SIGNAL();
     void Calcule_Toi();
     void Regle_Periode(double P_Periode);
     double Get_Periode(){return Periode;};
     const double* Get_Les_X();
     const double* Get_Les_Y();
     void Set_Harmonique(int P_Numero, double P_Amplitude);
     int Get_Nombre_Echantillons() { return Nombre_Echantillons;}
     const double* Get_Harmoniques() { return Amplitudes;};
          
     
protected :
    int Nombre_Echantillons;
    int Nombre_Amplitudes;
    double* Les_X;
    double* Les_Y;
    double* Amplitudes;
    double Periode;

};

#endif	/* C_SIGNAL_H */

