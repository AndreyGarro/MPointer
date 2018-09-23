//
// Created by andrew on 19/09/18.
//

#include <iostream>
#include "MPointerGC.h"
#include <chrono>
#include <thread>

bool MPointerGC::active = false;
MPointerGC* MPointerGC::instance = nullptr;

void MPointerGC::contar() {
    int x=0;
    while (x<100){
        cout<<x<<endl;
        x++;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }

}

bool MPointerGC::isActive() {
    return active;
}

MPointerGC *MPointerGC::getInstance() {
    if(!instance){
        instance = new MPointerGC();
    }
    active = true;
    return instance;
}

string MPointerGC::addPointer(int **nuevoPTR) {
    string nuevoID = generarID();
    listaMPointer.insertarNodo(nuevoPTR, nuevoID);
    return nuevoID;
}

string MPointerGC::generarID() {
    this->ID ++;
    return "GC-" + to_string(ID);
}

string MPointerGC::addRepitedPointer(int** nuevo) {
    for(int i = 0; i<listaMPointer.getLenght(); i++){
        if(nuevo == listaMPointer.getDato(i)){
            string id = listaMPointer.idNecesitado(i);
            this->listaMPointer.aumentarRef(id);
            return id;
        }
    }
}

void MPointerGC::imprimirLista() {
    for(int i = 0; i<listaMPointer.getLenght(); i++){
        cout<<listaMPointer.getDato(i)<<endl;
    }

}

void MPointerGC::eliminarReferencia(string id) {
    if(this->listaMPointer.getCantRefPorID(id) == 1){
        this->listaMPointer.eliminarNodo(id);
    }
    else {
        this->listaMPointer.disminuirRef(id);
    }
}

