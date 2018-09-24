//
// Created by andrew on 19/09/18.
//

#ifndef MPOINTER_MPOINTERGC_H
#define MPOINTER_MPOINTERGC_H
#include "../MPointer.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "../Listas/ListaGC.h"

using namespace std;

class MPointerGC {
private:
    static bool active;

    static MPointerGC * instance;

    ListaGC<MPointer<int>> listaMPointer;

    string generarID();

    int ID = -1;

    MPointerGC() { cout << "Se creo una instancia nueva!\n"; }

    MPointerGC(const MPointerGC &);

    ~MPointerGC() {}

    void eliminarReferencia(string id);



public:
    static MPointerGC *getInstance();

    static bool isActive();

    string addPointer(int **nuevo);

    string addRepitedPointer(int ** nuevo);

    void imprimirLista();
};

#endif //MPOINTER_MPOINTERGC_H
