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
public:
    C_BOUTON(QWidget * P_parent = 0);
    
protected:

    void mousePressEvent(QMouseEvent* P_event);
private:

};

#endif	/* C_BOUTON_H */

