//
// Created by andrew on 19/09/18.
//

#ifndef MPOINTER_MPOINTERGC_H
#define MPOINTER_MPOINTERGC_H

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "../MPointer.h"
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

    MPointer<int> *array = (MPointer<int>*) malloc(sizeof(MPointer<int>)*20);

    int ID = -1;

public:
    static MPointerGC *getInstance();

    static bool isActive();

    string addPointer(int **nuevo);

    void contar();

    string generarID();

    string addRepitedPointer(int ** nuevo);

    void imprimirLista();

    void eliminarReferencia(string id);
};

#endif //MPOINTER_MPOINTERGC_H
