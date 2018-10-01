cmake_minimum_required(VERSION 3.12)
project(untitled4)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fpermissive")

include_directories(. include/rapidjson)

add_executable(MServidor main.cpp Server/Server.cpp Server/Server.h Server/JSONMaker.cpp Server/JSONMaker.h Server/Memoria.cpp Server/Memoria.h Server/ListaDoble.h Server/MapNode.cpp Server/MapNode.h)