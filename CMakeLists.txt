cmake_minimum_required(VERSION 3.12)
project(MPointer)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)
include_directories(src/Listas)
include_directories(src/MPointerGC)
include_directories(src/Server)
include_directories(libraries/include/rapidjson)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

add_executable(MPointer
        "images/Diagrama I Iteración.jpeg"
        "images/Diagrama II Iteracion.jpeg"
        images/diagramaClases.jpg
        images/diagramaComponentes.jpg
        images/listas.jpg
        src/Listas/ListaDoble.h
        src/Listas/ListaGC.h
        src/MPointerGC/MPointerGC.cpp
        src/MPointerGC/MPointerGC.h
        MPointerQT/MPointerQT/main.cpp
        src/Server/MCliente.cpp
        src/Server/MCliente.h
        src/MPointer.h
        src/Server/JSONMakerClient.cpp
        src/Server/JSONMakerClient.h
        src/Ordenamientos/Sorts.h
        src/Ordenamientos/Sorts.cpp
        src/Dato.h)
