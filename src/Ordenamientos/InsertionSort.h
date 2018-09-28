//
// Created by andrew on 25/09/18.
//

#ifndef MPOINTER_INSERTIONSORT_H
#define MPOINTER_INSERTIONSORT_H


#include <src/Listas/ListaDoble.h>

class InsertionSort {

public:
    void insertionSort(ListaDoble<MPointer<int>> lista);
    void PrintArray(ListaDoble<MPointer<int>> lista);

};


#endif //MPOINTER_INSERTIONSORT_H
