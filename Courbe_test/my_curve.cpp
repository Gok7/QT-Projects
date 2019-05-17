#include <QDebug>
#include <QPen>
#include <QPainter>
#include <QSGSimpleRectNode>
#include "math.h"
#include "my_curve.h"

#define PI 3.14159265

MyCurve::MyCurve(QQuickItem *parent) :
    QQuickPaintedItem(parent)
{

}

float MyCurve::Translation_x(float P_x,qreal P_Screen_widht){

    float x=0;


    return x;

}

float MyCurve::Translation_y(float P_y,qreal P_Screen_height){

    float y=0;


    return y;

}

void MyCurve::paint( QPainter* painter)
{
    QPainterPath path;
    QRectF Monrect = boundingRect();    //recupere le rectangle du QML
    float my_widht=Monrect.width();
    float my_height=Monrect.height();
    float x=0,y=0;
    QPointF point(0,0);
    QPointF newPoint(0,0);

    for(x=0; x <my_widht; x++)
        {
            y=(my_height/2)+(my_height/4)*sin(x/4);
            //y = sin (x*PI/180);
            //x=Translation_x(x,my_widht);
            //y=Translation_y(y,my_height);
            newPoint.setX(x);
            newPoint.setY(y);
            painter->drawLine(point, newPoint);
            point=newPoint;
        }
}
