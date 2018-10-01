//
// Created by ortegajosant on 27/09/18.
//

#ifndef UNTITLED4_MEMORIA_H
#define UNTITLED4_MEMORIA_H


#include <iostream>
#include "JSONMaker.h"
#include "ListaDoble.h"
#include "MapNode.h"

class Memoria {
private:

    // Variables locales
    void * heap;
    int posicionFinal;
    int maximo;
    ListaDoble<MapNode> *  mapa = new ListaDoble<MapNode>();
    JSONMaker jsonMaker;

    // Reservar memoria
    std::string iniciarInt();
    std::string iniciarLong();
    std::string iniciarChar();
    std::string iniciarDouble();
    std::string iniciarFloat();
    std::string iniciarBool();
    std::string iniciarString();

    // Asignar valores
    std::string asignarValor(rapidjson::Document& doc);


    // RetornarValores
    std::string retornarValor(rapidjson::Document& doc);

    // ID
    std::string asignarID();
public:
    Memoria(size_t tamano);
    std::string verificarSolicitud(std::string);

};


#endif //UNTITLED4_MEMORIA_H
