/* 
 * File:   C_CADRE1.h
 * Author: flopyy
 *
 * Created on 5 décembre 2013, 16:48
 */

#ifndef _C_CADRE1_H
#define	_C_CADRE1_H

#include "ui_C_CADRE1.h"
#include <QFileDialog>

class C_CADRE1 : public QMainWindow {
    Q_OBJECT
public:
    C_CADRE1();
    virtual ~C_CADRE1();
    void mousePressEvent(QMouseEvent * P_event);
private:
    Ui::C_CADRE1 widget;
protected slots:
    void Slot_Gestion_Fichier_Enregistrer();
    void Slot_Gestion_Fichier_Ouvrir();
    void Slot_b();
};

#endif	/* _C_CADRE1_H */
