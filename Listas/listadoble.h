#ifndef LISTADOBLE_H
#define LISTADOBLE_H
#include "../../MPointer.h"
#include <iostream>

using namespace std;

struct Nodo{
    int data;
    MPointer<Nodo> *next = nullptr;
    MPointer<Nodo> *prev = nullptr;
};

class ListaDoble{
    MPointer<Nodo> *head;

public :
    ListaDoble(){
        head = nullptr;
    }

    void add(int p_data){
        Nodo tmp1;
        tmp1.data = p_data;

        if (head == nullptr){
            head = new MPointer<Nodo>();
            head->operator=(tmp1);
        }
        else{
            MPointer<Nodo> *tmp2 = head;
            while (tmp2->operator&().next != nullptr) {
                tmp2 = tmp2->operator&().next;
            }
            MPointer<Nodo> *tmp3 = tmp2->operator&().next;
            tmp3 = new MPointer<Nodo>();
            MPointer<Nodo> *tmpPrev = tmp3->operator&().prev;
            tmp2->operator&().next->operator=(tmp1);
            tmpPrev = new MPointer<Nodo>();
            tmpPrev->operator=(*tmp2);
        }

    }

    void printL(){
        cout << "listaaaa";
        MPointer<Nodo> *tmp = head;
        while(tmp != nullptr){
            cout << tmp->operator&().data << " -> ";
            tmp = tmp->operator&().next;
        }
    }
};



#endif // LISTADOBLE_H
