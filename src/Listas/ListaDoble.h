#ifndef LISTADOBLE_H
#define LISTADOBLE_H
#include "../MPointer.h"
#include <iostream>

using namespace std;

template<class T>
struct nodoD{
    T data;
    nodoD *next = nullptr;
    nodoD *prev = nullptr;

    nodoD(T data) {
        this->data = data;
    }
};

template <class T>
class ListaDoble{

    int length;
    nodoD<MPointer<int>> *head;

public :
    ListaDoble(){
        head = nullptr;
    }

    void add(T p_data){
        nodoD<T> *nuevo = new nodoD<T>(p_data);
        if (this->head == nullptr){
            head = nuevo;
        }
        else{
            nodoD<T> *temp;
            temp = head;
            while(temp->next){
                temp = temp->next;
            }
            temp->next = nuevo;
            nuevo->prev = temp;
        }
        this->length ++;
    }

    T getMPointer(int pos){
        nodoD<T> *temp = head;
        for(int i = 0; i < pos; i++){
            temp = temp->next;
        }
        return temp->data;
    }

    void setMPointer(int pos, T newData) {
        nodoD<T> *temp = head;
        for(int i = 0; i < pos; i++){
            temp = temp->next;
        }
        temp->data = newData;
    }

    void printList(){
        auto *tmp = head;
        for(int i = 0; i < this->length; i++){
            cout<<tmp->data.operator&()<<endl;
            tmp = tmp->next;
        }
    }

    int getLength(){
        return this->length;
    }
};

#endif // LISTADOBLE_H
