#ifndef LISTADOBLE_H
#define LISTADOBLE_H
#include "../../MPointer.h"
#include <iostream>

using namespace std;

class Nodo{
    int data;
    MPointer<Nodo*> *next = nullptr;
    MPointer<Nodo*> *prev = nullptr;
public:
    int getData(){
        return data;
    }
    void setData(int data){
        this->data = data;
    }
    MPointer<Nodo*>* getNext(){
        return next;
    }
    void setNext(Nodo *&next){
        if (this->next == nullptr){
            this->next = new MPointer<Nodo*>();
        }
        this->next->operator=(next);
    }
    MPointer<Nodo*>* getPrev(){
        return prev;
    }
    void setPrev(Nodo *&prev){
        if (this->prev == nullptr){
            this->prev = new MPointer<Nodo*>();
        }
        this->prev->operator=(prev);
    }
};

class ListaDoble{
    MPointer<Nodo*> *head;

public :
    ListaDoble(){
        head = nullptr;
    }

    void add(int p_data){
        Nodo* tmpNodo = new Nodo;
        tmpNodo->setData(p_data);

        if (head == nullptr){
            head = new MPointer<Nodo*>();
            head->operator=(tmpNodo);
        }
        else{
            MPointer<Nodo*> *tmp = head;
            while (tmp->operator&()->getNext() != nullptr) {
                tmp = tmp->operator&()->getNext();
            }
            MPointer<Nodo*> *tmpNext = new MPointer<Nodo*>();
            tmp->operator&()->setNext(tmpNodo);
            tmpNext->operator=(*tmp->operator&()->getNext());
            Nodo* tmpNodoPrev = tmp->operator&();
            tmpNext->operator&()->setPrev(tmpNodoPrev);
        }

    }

    void remove(){
//not yet, u see, right?
    }

    void printL(){
        cout << "listaaaa";
        MPointer<Nodo*> *tmp = head;
        while(tmp != nullptr){
            cout << tmp->operator&()->getData() << " -> ";
            tmp = tmp->operator&()->getNext();
        }
        cout << endl;
    }
};



#endif // LISTADOBLE_H
