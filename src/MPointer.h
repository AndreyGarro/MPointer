#ifndef MPOINTER_MPOINTER_H
#define MPOINTER_MPOINTER_H

#include <stdlib.h>
#include <iostream>
#include "Server/MCliente.h"
#include "MPointerGC/MPointerGC.h"
#include "Dato.h"

using namespace std;

template<class T>
class MPointer {
private:
    Dato<T> data;
    string ID;
public:

    MPointer();

    ~MPointer();

    T operator&();

    Dato<T> &operator*();

    MPointer<T> &operator=(const MPointer<T> &);

    T operator=(const T &);

    static void MPointer_init_(string IP, int puerto);
};

/**
 * Constructor de la clase MPointer
 * @tparam T  Definicion del dato con el que se va a trabajar
 */
template<class T>
MPointer<T>::MPointer() {
    if (MPointerGC::isActive()) {
        data.New();
        ID = "";
    } else if (MCliente::esActivo()) {
        data.generarIDServer();
    } else {
        cout << "Primero debe activar MPointerGC o el Servidor" << endl;
    }
}

/**
 * Destrcutor de la clase MPointer, Se omunica con GC
 * para indicar que el objeto a sido destruido.
 * @tparam T
 */
template<class T>
MPointer<T>::~MPointer() {
    if (MPointerGC::isActive()) {
        MPointerGC *GC = MPointerGC::getInstance();
        GC->eliminarReferencia(this->ID);
    }
}

/**
 * Operador &, Retorna el valor guardado en data.
 */
template<class T>
T MPointer<T>::operator&() {
    if (MCliente::esActivo()) {
        return data.retornarDatoServer();
    }
    return data.getData();
}

/**
 *Operador *, permite almacenar un valor en data
 *
 */
template<class T>
Dato<T> &MPointer<T>::operator*() {
    if (MPointerGC::isActive()) {
        MPointerGC *GC = MPointerGC::getInstance();
        if (this->ID == "") {
            this->ID = GC->addPointer(data.getDataPtr());
        }
    } else if (MCliente::esActivo()) {
        return this->data;
    } else {
        cout << "Primero debe activar MPointerGC o el Servidor" << endl;
    }
    return this->data;
}

/**
 * Operador = para el caso de copia de dos MPointer.
 *
 * @tparam T
 * @param a Dirreccion de memoria de MPointer
 * @return La dirrecion de memoria con las modificaciones hechas
 */
template<class T>
MPointer<T> &MPointer<T>::operator=(const MPointer<T> &a) {
    if (this != &a) {
        if (MPointerGC::isActive()) {
            MPointerGC *GC = MPointerGC::getInstance();
            this->data = a.data;
            this->ID = a.ID;
            GC->addRepitedPointer(this->ID);
        } else if (MCliente::esActivo()) {
            this->data = a.data;
        } else {
            cout << "Primero debe activar MPointerGC o el Servidor" << endl;
        }
    }
    return *this;
}

/**
 * Operador = para el caso de copia de copia de valores distintos a MPointer
 * @tparam T
 * @param a  Dirreccion de memoria del dato que se quiere asignar
 * @return El valor del guardado en data
 */
template<class T>
T MPointer<T>::operator=(const T &a) {
    cout<<"Entré :"<<a<<endl;
    if (MPointerGC::isActive()) {
        MPointerGC *GC = MPointerGC::getInstance();
        data = a;
        if (this->ID == "") {
            this->ID = GC->addPointer(data.getDataPtr());
        }
    } else if (MCliente::esActivo()) {
        this->data = a;
        return a;
    } else {
        cout << "Primero debe activar MPointerGC o el Servidor" << endl;
    }
    return data.operator=(a);
}

template<class T>
void MPointer<T>::MPointer_init_(string IP, int puerto) {
    MCliente::getInstance(IP, puerto);
}



#endif //MPOINTER_MPOINTER_H

