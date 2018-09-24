TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    ../../MPointerGC/MPointerGC.cpp

HEADERS += \
    ../../MPointer.h \
    ../../MPointerGC/MPointerGC.h \
    ../../Listas/ListaGC.h \
    ../../Listas/listadoble.h

