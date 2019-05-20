/* 
 * File:   C_CADRE.h
 * Author: flopyy
 *
 * Created on 12 décembre 2013, 14:05
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
    void Slot_GO();
};

#endif	/* _C_CADRE_H */
