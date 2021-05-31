#-------------------------------------------------
#
# Project created by QtCreator 2020-06-08T09:04:09
#
#-------------------------------------------------

QT       += core gui sql network multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = intelligent_home
TEMPLATE = app


SOURCES += main.cpp\
        main_widget.cpp \
    login.cpp \
    recreation.cpp \
    music.cpp \
    viedo.cpp \
    light.cpp \
    curtain.cpp \
    appliance.cpp \
    monitor.cpp \
    numgame.cpp \
    start.cpp

HEADERS  += main_widget.h \
    login.h \
    recreation.h \
    music.h \
    viedo.h \
    light.h \
    curtain.h \
    appliance.h \
    monitor.h \
    numgame.h \
    start.h

FORMS    += main_widget.ui \
    login.ui \
    recreation.ui \
    music.ui \
    viedo.ui \
    light.ui \
    curtain.ui \
    appliance.ui \
    monitor.ui \
    numgame.ui \
    start.ui

RESOURCES += \
    image/image.qrc



CONFIG += c++11
