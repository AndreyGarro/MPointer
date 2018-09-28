//
// Created by christian on 16/09/18.
//


#ifndef MPOINTER_MPOINTER_H
#define MPOINTER_MPOINTER_H

#include <stdlib.h>
#include <iostream>
#include "src/MPointerGC/MPointerGC.h"


template <class T>
class MPointer {
private:
    T *data;



public:
    std::string ID;
    MPointer();
    ~MPointer();
    T operator &();
    T& operator *();
    MPointer<T>& operator =(const MPointer<T> &);
    T operator =(const T&);

};

/**
 * Constructor de la clase MPointer
 * @tparam T  Definicion del dato con el que se va a trabajar
 */
template <class T>
MPointer<T>::MPointer(){
    data = (T*)malloc(sizeof(T));
    ID = "";
}

/**
 * Destrcutor de la clase MPointer, Se omunica con GC
 * para indicar que el objeto a sido destruido.
 * @tparam T
 */
template <class T>
MPointer<T>::~MPointer() {
    MPointerGC *GC = MPointerGC::getInstance();
    GC->eliminarReferencia(this->ID);
}

/**
 * Operador &, Retorna el valor guardado en data.
 */
template <class T>
T MPointer<T>::operator &() {
    return *this->data;
}

/**
 *Operador *, permite almacenar un valor en data
 *
 */
template <class T>
T &MPointer<T>::operator *() {
    if(MPointerGC::isActive()) {
        MPointerGC *GC =MPointerGC::getInstance();
        if (this->ID == ""){
            this-> ID = GC->addPointer(data);
        }
//        cout << data <<endl;
    }else {
        cout << "Primero debe activar MPointerGC" << endl;
    }
    return *this->data;
}

/**
 * Operador = para el caso de copia de dos MPointer.
 *
 * @tparam T
 * @param a Dirreccion de memoria de MPointer
 * @return La dirrecion de memoria con las modificaciones hechas
 */
template <class T>
MPointer<T>& MPointer<T>::operator =(const MPointer<T> &a) {
    if(this != &a) {
        if (MPointerGC::isActive()) {
            MPointerGC *GC = MPointerGC::getInstance();
            this->data = a.data;
//            cout << a.data <<" "<< this->data << endl;
            this->ID = a.ID;
            GC->addRepitedPointer(this->ID);
        } else {
            cout <<  "Primero debe activar MPointerGC"<<endl;
        }
    }
    return  *this;

}

/**
 * Operador = para el caso de copia de copia de valores distintos a MPointer
 * @tparam T
 * @param a  Dirreccion de memoria del dato que se quiere asignar
 * @return El valor del guardado en data
 */
template <class T>
T MPointer<T>::operator =(const T &a) {
    if(MPointerGC::isActive()) {
        MPointerGC *GC =MPointerGC::getInstance();
        *this->data = a;
        if (this->ID == "") {
            this->ID = GC->addPointer(data);
        }
//        cout << data <<endl;
    }else{
        cout << "Primero debe activar MPointerGC"<<endl;
    }
    return *this->data;
}
#endif //MPOINTER_MPOINTER_H

