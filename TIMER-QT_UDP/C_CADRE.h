/* 
 * File:   C_CADRE.h
 * Author: flopyy
 *
 * Created on 5 décembre 2013, 11:07
 */

#ifndef _C_CADRE_H
#define	_C_CADRE_H
#include <QTimer>
#include "ui_C_CADRE.h"

class C_CADRE : public QMainWindow {
    Q_OBJECT
public:
    C_CADRE();
    virtual ~C_CADRE();
    void Set_Data(C_DATA* P_Data);

    protected:
        QTimer* Le_Timer;
        C_DATA* Data;
private:
    Ui::C_CADRE widget;
    bool Timer_en_marche;
    
    protected slots:
        void Slot_affiche_coucou();
        void Slot_marche_arret();
        void Slot_reglage_timer(double P_interval);
};

#endif	/* _C_CADRE_H */
