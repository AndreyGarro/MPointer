//
// Created by andrew on 25/09/18.
//

#include "InsertionSort.h"
void InsertionSort::insertionSort(ListaDoble<MPointer<int>> lista){
    for(int i = 1; i < lista.getLenght(); ++i){
        int j = i - 1;
        int key = &lista.getMPointer(i);
        while(j >= 0 && &lista.getMPointer(j) > key){
            lista.getMPointer(j+1) = &lista.getMPointer(j);
            --j;
        }
        *lista.getMPointer(j+1) = key;
    }
}

void InsertionSort::PrintArray(ListaDoble<MPointer<int>> lista) {
    for (int i = 0; i < lista.getLenght(); ++i)
        cout << &lista.getMPointer(i) << " " << std::flush;
}