#-------------------------------------------------
#
# Project created by QtCreator 2013-07-05T15:39:21
#
#-------------------------------------------------

QT       += core gui webkit network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qt-map-example
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    waypoint.cpp

HEADERS  += mainwindow.h \
    waypoint.h

FORMS    += mainwindow.ui

OTHER_FILES += \
    google.html

RESOURCES += \
    map.qrc
