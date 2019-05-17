#
#  QCustomPlot Demo Project
#

QT += core gui
QT += gui declarative
 QT += widgets
TEMPLATE = app

SOURCES += main.cpp\
           mainwindow.cpp \
        ../qcustomplot.cpp

HEADERS  += mainwindow.h \
         ../qcustomplot.h

FORMS    += mainwindow.ui

