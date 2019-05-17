#ifndef SINUS_H
#define SINUS_H

#include <QWidget>
#include <QPainter>
#include <QPen>
#include <iostream>
#include <cmath>

#define PI 3.14159265

class Sinus : public QWidget
{
    Q_OBJECT
public:
    explicit Sinus(QWidget *parent = 0);
signals:

protected:
    void paintEvent( QPaintEvent* );
public slots:

};

#endif // SINUS_H
