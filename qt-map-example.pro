#-------------------------------------------------
#
# Project created by QtCreator 2013-07-05T15:39:21
#
#-------------------------------------------------

QT       += core gui webkitwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qt-map-example
TEMPLATE = app

CONFIG += c++11

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui

OTHER_FILES += \
    google.html

RESOURCES += \
    map.qrc
