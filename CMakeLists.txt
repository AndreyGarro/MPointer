cmake_minimum_required(VERSION 3.12)
project(MPointer)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Listas)
include_directories(MPointerGC)

add_executable(MPointer
        Listas/ListaGC.cpp
        Listas/ListaGC.h
        MPointerGC/MPointerGC.cpp
        MPointerGC/MPointerGC.h
        main.cpp
        MPointer.h)
