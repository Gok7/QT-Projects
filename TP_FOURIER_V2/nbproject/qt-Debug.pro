# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Debug/MinGW_QT-Windows
TARGET = TP_FOURIER_V2
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += debug 
PKGCONFIG +=
QT = core gui widgets
SOURCES += C_CADRE.cpp C_SIGNAL.cpp C_SLIDER.cpp TP_FOURIER_V2.cpp
HEADERS += C_CADRE.h C_SIGNAL.h C_SLIDER.h DEFINES.h DEFINES_1.h
FORMS += C_CADRE.ui
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
