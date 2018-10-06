#ifndef MPOINTER_MPOINTERGC_H
#define MPOINTER_MPOINTERGC_H

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <thread>
#include <pthread.h>

#include "../Listas/ListaGC.h"

using namespace std;

class MPointerGC {
private:
    static bool active;
    static MPointerGC * instance;
    ListaGC<void> listaMPointer;
    int ID = -1;
    thread * thread_m;

    string generarID();

    MPointerGC() {
        thread_m = new thread(MPointerGC::threadFunc, this);
        cout << "Se creo una instancia nueva!\n";
    }

    MPointerGC(const MPointerGC &);

public:
    ~MPointerGC() {}

    void stopThread();

    static void threadFunc(MPointerGC * param);

    static MPointerGC *getInstance();

    static bool isActive();

    template <typename P>
    std::string addPointer(P *nuevoPTR);

    void addRepitedPointer(string id);

    void imprimirLista();

    void eliminarReferencia(string id);

    void revisaLista();
};

/**
 * Agrega la nueva dirección de memoria del puntero añadido
 * @param nuevoPTR dirección de memoria del nuevo dato del pointer
 * @return ID asignado a ese dato
 */
 template <typename P>
string MPointerGC::addPointer(P *nuevoPTR) {
    string nuevoID = MPointerGC::generarID();
    listaMPointer.insertarNodo(nuevoPTR, nuevoID);
    return nuevoID;
}

#endif //MPOINTER_MPOINTERGC_H
