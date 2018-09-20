cmake_minimum_required(VERSION 3.12)
project(MPointer)

set(CMAKE_CXX_STANDARD 14)

add_executable(MPointer main.cpp MPointer.h MPointerGC/MPointerGC.cpp MPointerGC/MPointerGC.h)