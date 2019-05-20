/* 
 * File:   C_CADRE.h
 * Author: flopyy
 *
 * Created on 12 décembre 2013, 08:44
 */

#ifndef _C_CADRE_H
#define	_C_CADRE_H

#include "ui_C_CADRE.h"
#include "C_COORDINATION.h"

class C_CADRE : public QMainWindow {
    Q_OBJECT
public:
    C_CADRE();
    virtual ~C_CADRE();
    
private:
    
    Ui::C_CADRE widget;
    C_COORDINATION Coordination;
   
protected slots:
    void Slot_Info_A1();
    void Slot_Info_A2();

};

#endif	/* _C_CADRE_H */
