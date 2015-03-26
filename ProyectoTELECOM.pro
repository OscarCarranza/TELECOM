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
    dialogembong.cpp \
    menu.cpp \
    list.cpp \
    remove.cpp \
    facturar.cpp \
    venta.cpp \
    sales.cpp

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
    dialogembong.h \
    menu.h \
    list.h \
    remove.h \
    facturar.h \
    venta.h \
    sales.h

FORMS    += mainwindow.ui \
    login.ui \
    dialogembong.ui \
    menu.ui \
    list.ui \
    remove.ui \
    facturar.ui \
    sales.ui

RESOURCES += \
    resources.qrc
