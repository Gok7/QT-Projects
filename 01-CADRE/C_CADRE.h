/* 
 * File:   C_CADRE.h
 * Author: flopyy
 *
 * Created on 4 décembre 2013, 15:35
 */

#ifndef _C_CADRE_H
#define	_C_CADRE_H

#include "ui_C_CADRE.h"

class C_CADRE : public QMainWindow {
    Q_OBJECT
public:
    C_CADRE();
    virtual ~C_CADRE();
    
private:
    Ui::C_CADRE widget;

protected slots:
    void Slot_Info();
    void Slot_Info(int &P_valeur);

};

#endif	/* _C_CADRE_H */
