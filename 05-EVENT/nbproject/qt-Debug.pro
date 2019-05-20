# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Debug/MinGW_QT-Windows
TARGET = 05-EVENT
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += debug 
PKGCONFIG +=
QT = core gui widgets
SOURCES += C:/Users/flopyy/Documents/NetBeansProjects/QT/05-EVENT/C_CADRE1.cpp main.cpp
HEADERS += C:/Users/flopyy/Documents/NetBeansProjects/QT/05-EVENT/C_CADRE1.h
FORMS += C:/Users/flopyy/Documents/NetBeansProjects/QT/05-EVENT/C_CADRE1.ui
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
LIBS += -lqwtd  
equals(QT_MAJOR_VERSION, 4) {
QMAKE_CXXFLAGS += -std=c++11
}
equals(QT_MAJOR_VERSION, 5) {
CONFIG += c++11
}
