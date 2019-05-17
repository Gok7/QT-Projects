#include <QtGui/QGuiApplication>
#include "qtquick2applicationviewer.h"

int main(int argc, char *argv[])
{

    QGuiApplication app(argc, argv);
    QtQuick2ApplicationViewer viewer;

#ifdef Q_OS_LINUX

    viewer.setMainQmlFile(QStringLiteral("qml/Project2/Linux/main.qml"));
#endif

#ifdef Q_OS_ANDROID

    viewer.setMainQmlFile(QStringLiteral("qml/Project2/Android_tablet/main.qml"));

#endif


    viewer.showExpanded();
    return app.exec();
}

