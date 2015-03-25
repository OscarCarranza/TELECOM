#-------------------------------------------------
#
# Project created by QtCreator 2015-03-23T22:22:23
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ProyectoTELECOM
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Cliente.cpp \
    Corporativo.cpp \
    EmbajadaONG.cpp \
    Empresas.cpp \
    Particulares.cpp \
    Postpago.cpp \
    Prepago.cpp \
    Usuario.cpp \
    login.cpp \
    menu.cpp \
    clients.cpp \
    dialogembong.cpp

HEADERS  += mainwindow.h \
    Cliente.h \
    Corporativo.h \
    EmbajadaONG.h \
    Empresas.h \
    Particulares.h \
    Postpago.h \
    Prepago.h \
    Usuario.h \
    login.h \
    menu.h \
    clients.h \
    dialogembong.h

FORMS    += mainwindow.ui \
    login.ui \
    menu.ui \
    clients.ui \
    dialogembong.ui

RESOURCES += \
    resources.qrc
