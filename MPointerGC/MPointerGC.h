//
// Created by andrew on 19/09/18.
//
#include "../MPointer.h"

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

    ListaGC<MPointer<int>> listaMPointer;

    string generarID();

    void eliminarReferencia(string id);

    int ID = -1;

public:
    static MPointerGC *getInstance();

    static bool isActive();

    string addPointer(int **nuevo);

    string addRepitedPointer(int ** nuevo);

    void imprimirLista();
};

#endif //MPOINTER_MPOINTERGC_H
