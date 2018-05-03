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
    auto.cpp \
    admchange.cpp \
    mainwindow.cpp

HEADERS  += \
    auto.h \
    admchange.h \
    mainwindow.h

FORMS    += \
    auto.ui \
    admchange.ui \
    mainwindow.ui
