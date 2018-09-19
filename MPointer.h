//
// Created by christian on 16/09/18.
//
#include <stdlib.h>
#include <iostream>

#ifndef MPOINTER_MPOINTER_H
#define MPOINTER_MPOINTER_H

template <class T>
class MPointer {
private:
    T *data;
    int ID;

public:
    MPointer();
    ~MPointer();
    T operator &();
    T& operator *();
    MPointer<T>& operator =(const MPointer<T>&);
    T operator =(const T&);
};



// Constructor, reserva el espacio para el data
template <class T>
MPointer<T>::MPointer(){
    data = (T*)malloc(sizeof(T));

}

// Destructor, Libera el espacio del data
template <class T>
MPointer<T>::~MPointer() {
    free(data);

}

// Operador &, Retorna el valor guardado en data.
template <class T>
T MPointer<T>::operator &() {
    std::cout << "Estoy en sobrecarga de &"<<std::endl;
    return *this->data;
}

/// Operador *, permite almacenar un valor en data
template <class T>
T &MPointer<T>::operator *() {
    std::cout << "Estoy en sobrecarga de *" <<std::endl;
    return *this->data;
}

//Operador = para el caso de copia de dos MPointer(Falta copiar el ID)
template <class T>
MPointer<T>& MPointer<T>::operator =(const MPointer<T> &a) {
    std::cout << "Estoy en caso 1 "<< std::endl;
    if(this != &a) {
        this->data = a.data;
    }
    return  *this;
}

/// Operador = para el caso de copia de copia de valores distintos a MPointer
template <class T>
T MPointer<T>::operator =(const T &a) {
    *this->data = a;
    std::cout << "Estoy en caso 2 " << std::endl;
    return *this->data;
}

#endif //MPOINTER_MPOINTER_H
