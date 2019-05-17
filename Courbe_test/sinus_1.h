#ifndef SINUS_H
#define SINUS_H

#include <QWidget>
#include <QPainter>
#include <QPen>
#include <iostream>
#include <cmath>
#include <QtQuick/QQuickPaintedItem>

#define PI 3.14159265


class Sinus : public QQuickPaintedItem
{
    Q_OBJECT
public:
    explicit Sinus(QQuickItem *parent = 0);
    void paint( QPainter* Painter);

};

#endif // SINUS_H
