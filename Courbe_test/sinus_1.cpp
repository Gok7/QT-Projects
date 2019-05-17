#include "sinus.h"
using namespace std;



Sinus::Sinus(QQuickItem *parent) :
    QQuickPaintedItem(parent) {

}



void Sinus::paint( QPainter* Painter){
    QPainter *aPainter=Painter;
    QRectF Monrect = boundingRect();    //recupere le rectangle du QML
    int windowHeight = Monrect.height();
    int windowWidth = Monrect.width();


    int xg0 = 0;
    int yg0 = windowHeight/2;
    aPainter->translate(xg0,yg0);

    float x;
    float y;
    float angle;
    float radius = 100;
    float sinus;
    int steps = windowWidth;
    int labelAllxSteps = steps / 7;

    aPainter->drawLine(0,0,windowWidth,0);

    for(int i = 0;i < steps;i++) {
        angle = 360 / (float)steps * (float)i;                // Calculate the angle
        sinus = sin (angle*PI/180);
        y = sinus * radius;
        x = (float)i;
        //cout << "i: "<< i << " Angle: " << angle << " x: "<< x << " y: "<< y << "\n";
        aPainter->drawPoint((int)x,(int)y);

        // Draw the center vertical line
        if((int)y == 0 && x > 0) {
            aPainter->drawLine(x,0-(windowHeight/2),x,0+(windowHeight/2));
        }

        // Draw Label's
        if((i % labelAllxSteps) == 0 && x > 0 && x < steps) {
            QString str;
            str.sprintf("Sin: %f Angel: %f", y, angle);
            aPainter->drawText((int)x,(int)y,str);
        }
    }
}
