//
// Created by andrew on 19/09/18.
//


#ifndef MPOINTER_MPOINTERGC_H
#define MPOINTER_MPOINTERGC_H

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <thread>
#include <pthread.h>

#include "src/Listas/ListaGC.h"

using namespace std;

class MPointerGC {
private:
    //Atributos
    static bool active;
    static MPointerGC * instance;
    ListaGC<int> listaMPointer;
    string generarID();
    int ID = -1;
    thread * thread_m;
    //

    MPointerGC() {
        thread_m = new thread(threadFunc, this);
        cout << "Se creo una instancia nueva!\n";
    };

    MPointerGC(const MPointerGC &);

public:

    ~MPointerGC() {}

    void stopThread();

    static void threadFunc(MPointerGC * param);

    static MPointerGC *getInstance();

    static bool isActive();

    std::string addPointer(int *nuevo);

    void addRepitedPointer(string id);

    void imprimirLista();

    void eliminarReferencia(string id);

    void revisaLista();
};

#endif //MPOINTER_MPOINTERGC_H
