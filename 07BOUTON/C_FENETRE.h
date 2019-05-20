/* 
 * File:   C_FENETRE.h
 * Author: flopyy
 *
 * Created on 11 décembre 2013, 15:14
 */

#ifndef _C_FENETRE_H
#define	_C_FENETRE_H

#include "ui_C_FENETRE.h"

class C_FENETRE : public QMainWindow {
    Q_OBJECT
public:
    C_FENETRE();
    virtual ~C_FENETRE();
    
protected slots:
    void Slot_Info_1(int P_Valeur);
    void Slot_Info_2(int P_Valeur);

private:
    Ui::C_FENETRE widget;

};

#endif	/* _C_FENETRE_H */
