# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Debug/MinGW_QT-Windows
TARGET = PAC_RESEAU_01
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += debug 
PKGCONFIG +=
QT = core gui widgets
SOURCES += C:/Users/flopyy/Documents/NetBeansProjects/QT/PAC_RESEAU_01/C_CADRE.cpp C:/Users/flopyy/Documents/NetBeansProjects/QT/PAC_RESEAU_01/C_COORDINATION.cpp C_EMETTEUR_UDP.cpp C_SECTION_CRITIQUE.cpp C_THREAD.cpp NS_NETWORK.cpp main.cpp
HEADERS += C:/Users/flopyy/Documents/NetBeansProjects/QT/PAC_RESEAU_01/C_CADRE.h C:/Users/flopyy/Documents/NetBeansProjects/QT/PAC_RESEAU_01/C_COORDINATION.h C_EMETTEUR_UDP.h C_SECTION_CRITIQUE.h C_THREAD.h DEFINE.h NS_NETWORK.h
FORMS += C:/Users/flopyy/Documents/NetBeansProjects/QT/PAC_RESEAU_01/C_CADRE.ui
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Debug/MinGW_QT-Windows
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += /C/Qwt-6.1.0/include 
LIBS += -lqwtd -lwsock32  
equals(QT_MAJOR_VERSION, 4) {
QMAKE_CXXFLAGS += -std=c++11
}
equals(QT_MAJOR_VERSION, 5) {
CONFIG += c++11
}
