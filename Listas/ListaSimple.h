//
// Created by andrew on 21/09/18.
//

#ifndef MPOINTER_LISTASIMPLE_H
#define MPOINTER_LISTASIMPLE_H

#include <iostream>
#include <string>

using namespace std;

template <class T>
        struct nodo{
    T dato;
    nodo<T> *siguiente;
};

template <class T>
class ListaSimple {

private:
    nodo<T> *primero;

public:
    ListaSimple(){
        primero = nullptr;
    }

    void insertarNodo(T *dato){
        if(this->primero == nullptr){
            nodo<T> *nuevo = new nodo<T>();
            nuevo->dato = *dato;
            primero = nuevo;
        }
        else{
            nodo<T> *aux;
            aux = this->primero;
            int x = 0;
            while(aux->siguiente){
                x++;
                aux = aux->siguiente;
            }
            nodo<T> *nuevo = new nodo<T>();
            nuevo->dato = *dato;
            aux->siguiente = nuevo;
        }
    };

    T getDato(int pos){
        int i = 0;
        nodo<T> *aux = primero;
        while (i<pos){
            aux = aux->siguiente;
            i++;
        }
        return aux->dato;
    };

};

#endif //MPOINTER_LISTASIMPLE_H
