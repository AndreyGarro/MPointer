cmake_minimum_required(VERSION 3.12)
project(MPointer)

set(CMAKE_CXX_STANDARD 14)

add_executable(MPointer main.cpp MPointer.h MPointerGC/MPointerGC.cpp MPointerGC/MPointerGC.h Listas/ListaGC.h src/server/MServidor.cpp src/server/MServidor.h src/server/MCliente.cpp src/server/MCliente.h)