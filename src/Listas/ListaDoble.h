#ifndef LISTADOBLE_H
#define LISTADOBLE_H
#include "src/MPointer.h"
#include <iostream>

using namespace std;

template<class T>
struct nodoD{
    T data;
    nodoD *next;
    nodoD *prev;
};

template <class T>
class ListaDoble{

    int lenght;
    nodoD<MPointer<int>> *primero;

public :
    ListaDoble(){
        primero = nullptr;
    }

    void add(T p_data){
        auto *nuevo = new nodoD<T>;
        nuevo->data = p_data;
        nuevo->next = NULL;
        if (this->primero == nullptr){
            primero = nuevo;
        }
        else{
            nodoD<T> *temp;
            temp = primero;
            while(temp->next){
                temp = temp->next;
            }
            temp->next = nuevo;
            nuevo->prev = temp;
        }
        this->lenght ++;
    }

    T getMPointer(int pos){
        auto *temp = primero;
        for(int i = 0; i < pos; i++){
            temp = temp->next;
        }
        return temp->data;
    }

    void printList(){
        auto *temp = primero;
        for(int i = 0; i < this->lenght; i++){
            cout<<temp->data.operator&()<<endl;
            temp = temp->next;
        }
    }

    int getLenght(){
        return this->lenght;
    }
};

#endif // LISTADOBLE_H
