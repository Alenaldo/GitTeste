#-------------------------------------------------
#
# Project created by QtCreator 2018-08-30T10:16:42
#
#-------------------------------------------------
QT += sql
QT       += core gui widgets

TARGET = EstoqueQT
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        inicio.cpp \
    cadastrofilial.cpp \
    cadastroproduto.cpp \
    consultar.cpp \
    criapedido.cpp \
    database.cpp

HEADERS += \
        inicio.h \
    cadastrofilial.h \
    cadastroproduto.h \
    consultar.h \
    criapedido.h \
    database.h

FORMS += \
        inicio.ui \
    cadastrofilial.ui \
    cadastroproduto.ui \
    consultar.ui \
    criapedido.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
