/* 
 * File:   C_CADRE.h
 * Author: Administrateur
 *
 * Created on 11 décembre 2013, 16:28
 */

#ifndef _C_CADRE_H
#define	_C_CADRE_H

#include "ui_C_CADRE.h"
#include <qwt_plot_curve.h>
#include "C_SIGNAL.h"


class C_CADRE : public QMainWindow {
    Q_OBJECT
public:
    C_CADRE();
    virtual ~C_CADRE();
     void Set_Le_Signal(C_SIGNAL* P_Signal);
     
private:
    Ui::Fenetre widget;
    QwtPlotCurve* La_Courbe;
 
 protected slots :
    void Slot_Changement_Amplitude(int P_ID, int P_Valeur);
    void Slot_Change_Periode(double P_Valeur);
    void Slot_Sauver();
    void Slot_Ouvrir();
    
    protected :
         C_SIGNAL* le_Signal;
         void Affiche_Courbe();
         
};

#endif	/* _C_CADRE_H */
