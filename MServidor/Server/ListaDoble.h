#ifndef LISTADOBLE_H
#define LISTADOBLE_H
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
    nodoD<T> * head;

public :
    ListaDoble(){
        head = nullptr;
    }

    void add(T p_data){
        auto *nuevo = new nodoD<T>;
        nuevo->next = NULL;
        nuevo->data = p_data;
        if (this->head == nullptr){
            head = nuevo;
        }
        else{
            nodoD<T> *tmp;
//            nodoD<T> *last;
            tmp = head;
            while(tmp->next != NULL){
//                last=tmp;
                tmp = tmp->next;
            }
            tmp->next = nuevo;
            nuevo->prev = tmp;
        }
        this->lenght ++;
    }

    T getMPointer(int pos){
        auto *tmp = head;
        for(int i = 0; i < pos; i++){
            tmp = tmp->next;
        }
        return tmp->data;
    }

    void printList(){
        auto *tmp = head;
        for(int i = 0; i < this->lenght; i++){
            cout<<tmp->data.operator&()<<endl;
            tmp = tmp->next;
        }
    }

    int getLenght(){
        return this->lenght;
    }
};

#endif // LISTADOBLE_H
