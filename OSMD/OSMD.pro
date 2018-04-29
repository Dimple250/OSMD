#-------------------------------------------------
#
# Project created by QtCreator 2018-04-29T12:09:39
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = OSMD
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    auto.cpp \
    admchange.cpp

HEADERS  += mainwindow.h \
    auto.h \
    admchange.h

FORMS    += mainwindow.ui \
    auto.ui \
    admchange.ui
