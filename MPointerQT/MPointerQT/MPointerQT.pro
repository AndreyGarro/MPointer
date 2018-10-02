TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    ../../src/MPointerGC/MPointerGC.cpp \
    ../../src/Server/MCliente.cpp \
    ../../src/Ordenamientos/Sorts.cpp

HEADERS += \
    ../../src/Listas/ListaDoble.h \
    ../../src/Listas/ListaGC.h \
    ../../src/MPointerGC/MPointerGC.h \
    ../../src/Server/MCliente.h \
    ../../src/MPointer.h \
    ../../src/Ordenamientos/Sorts.h

