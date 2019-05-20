/* 
 * File:   C_CADRE.h
 * Author: flopyy
 *
 * Created on 23 janvier 2014, 12:59
 */

#ifndef _C_CADRE_H
#define	_C_CADRE_H

#include "ui_C_CADRE.h"

class C_CADRE : public QMainWindow {
    Q_OBJECT
public:
    C_CADRE();
    virtual ~C_CADRE();
    
    protected slots:
    void Slot_Recuperer_Valeur_Slider(int P_Valeur); 
    void Slot_Get_Min(QString P_Min);
    void Slot_Get_Max(QString P_Max);
    
private:
    int Valeur_Slider;
    int Min;
    int Max;
    Ui::C_CADRE widget;
    
};

#endif	/* _C_CADRE_H */
