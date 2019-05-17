#include <QtGui/QGuiApplication>
#include "qtquick2applicationviewer.h"
#include "my_curve.h"



int main(int argc, char **argv)
{
    QGuiApplication app(argc, argv);
    QtQuick2ApplicationViewer viewer;

    qmlRegisterType<MyCurve>("Myqqchose", 1, 0, "MyCurve");
    viewer.setMainQmlFile(QStringLiteral("qml/Courbe_test/main.qml"));
    viewer.show();

    return app.exec();
}


