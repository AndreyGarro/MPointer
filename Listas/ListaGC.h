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
        int **dato;
        int cantRef;
        string ID;
        nodo<T> *siguiente;
};

template <class T>
class ListaGC {

private:
    nodo<T> *primero;
    int lenght = 0;

    nodo<T> getNodo(int pos){
        int i = 0;
        nodo<T> *aux = primero;
        while (i<pos){
            aux = aux->siguiente;
            i++;
        }
        return *aux;
    };

public:
    ListaGC(){
        primero = nullptr;
    }

    void insertarNodo(int **dato, string ID){
        auto *nuevo = new nodo<T>();
        if(this->primero == nullptr){
            nuevo->dato = dato;
            nuevo->ID = ID;
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
            nuevo->dato = dato;
            nuevo->ID = ID;
            aux->siguiente = nuevo;
        }
        nuevo->cantRef ++;
        this->lenght ++;
    };

    int** getDato(int pos){
        int i = 0;
        nodo<T> *aux = primero;
        while (i<pos){
            aux = aux->siguiente;
            i++;
        }
        return aux->dato;
    };

//    int** getDato(string id){
//        nodo<T> *aux = primero;
//        for(int i = 0; i < this->lenght; i++){
//            if(id == this->getNodo(i).ID){
//                return this->getNodo(i);
//            }
//        }
//    };

    int getCantRefPorID(string id){
        nodo<T> *aux = primero;
        for(int i = 0; i < this->lenght; i++){
            if(id == this->getNodo(i).ID){
                return this->getNodo(i).cantRef;
            }
        }
    }

    int getLenght() const {
        return lenght;
    }

    string idNecesitado(int pos){
        nodo<T> *aux = this->primero;
        for(int i = 0; i<pos; i++){
            aux = aux->siguiente;
        }
        return aux->ID;
    }

    void eliminarNodo(int pos){
        nodo<T> *aux = primero;
        if(pos == 0){
            primero = aux->siguiente;
            free(aux);
        } else {
            for (int i = 0; i < pos-1; i++) {
                aux = aux->siguiente;
            }
            free(aux->siguiente);
            aux->siguiente = aux->siguiente->siguiente;
        }
        this->lenght--;
    }

    void eliminarNodo(string id){
        for(int i = 0; i < this->lenght; i++){
            if(this->getNodo(i).ID == id){
                eliminarNodo(i);
                break;
            }
        }
    }

    void disminuirRef(string id){
        nodo<T> *aux = primero;
        for(int i = 0; i < this->lenght; i++){
            if(aux->ID == id){
                aux->cantRef --;
                break;
            }
            aux = aux->siguiente;
        }
    }

    void aumentarRef(string id){
        nodo<T> *aux = primero;
        for(int i = 0; i < this->lenght; i++){
            if(aux->ID == id){
                aux->cantRef ++;
                break;
            }
            aux = aux->siguiente;
        }
    }
};


#endif //MPOINTER_LISTASIMPLE_H
