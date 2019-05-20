/* 
 * File:   C_BOUTON.h
 * Author: flopyy
 *
 * Created on 11 décembre 2013, 14:06
 */

#ifndef C_BOUTON_H
#define	C_BOUTON_H
#include "QPushButton"

class C_BOUTON : public QPushButton {
    Q_OBJECT
    Q_PROPERTY(int ID READ Get_ID WRITE Set_IDs);
public:
    C_BOUTON(QWidget * P_parent = 0);
    inline void Set_ID(int P_ID);
    inline int Get_ID();
    
protected signals:
    void Signal_Presse();
    void Signal_Relache();

protected:

    void mousePressEvent(QMouseEvent* P_event);
    void mouseReleaseEvent(QMouseEvent* P_event);

private:

    QString Le_Texte;
    QString La_feuille_de_style;

};

#endif	/* C_BOUTON_H */

