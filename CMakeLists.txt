cmake_minimum_required(VERSION 3.12)
project(MPointer2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(images)
include_directories(Listas)
include_directories(MPointerGC)
include_directories(MPointerQT)
include_directories(MPointerQT/MPointerQT)
include_directories(src)
include_directories(src/server)

add_executable(MPointer2
        "images/Diagrama I Iteración.jpeg"
        "images/Diagrama II Iteracion.jpeg"
        images/diagramaClases.jpg
        images/diagramaComponentes.jpg
        images/listas.jpg
        Listas/listadoble.h
        Listas/ListaGC.h
        MPointerGC/MPointerGC.cpp
        MPointerGC/MPointerGC.h
        MPointerQT/MPointerQT/main.cpp
        src/server/MCliente.cpp
        src/server/MCliente.h
        src/server/MServidor.cpp
        src/server/MServidor.h
        MPointer.h)
