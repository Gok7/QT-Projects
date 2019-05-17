#include <QtQuick/QQuickPaintedItem>

class MyCurve : public QQuickPaintedItem
{
    Q_OBJECT

public:
    void paint( QPainter* painter);
    float Translation_x(float P_x,qreal P_Screen_widht);
    float Translation_y(float P_y,qreal P_Screen_height);

    explicit MyCurve(QQuickItem *parent = 0);

};



