//
// Created by andrew on 19/09/18.
//


#ifndef MPOINTER_MPOINTERGC_H
#define MPOINTER_MPOINTERGC_H

#include <iostream>
#include <stdio.h>
#include <stdlib.h>





#include "../Listas/ListaGC.h"

using namespace std;

class MPointerGC {
private:
    MPointerGC() { cout << "Se creo una instancia nueva!\n"; };

    ~MPointerGC() {}

    MPointerGC(const MPointerGC &);

    static bool active;

    static MPointerGC * instance;

    ListaGC<int> listaMPointer;

    string generarID();

    int ID = -1;

public:
    static MPointerGC *getInstance();

    static bool isActive();

    string addPointer(int *nuevo);

    void addRepitedPointer(string id);

    void imprimirLista();

    void eliminarReferencia(string id);
};

#endif //MPOINTER_MPOINTERGC_H
