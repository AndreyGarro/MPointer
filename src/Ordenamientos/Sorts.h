#ifndef SORTS_H
#define SORTS_H

#include "../Listas/ListaDoble.h"

class Sorts
{
private:
    int partition(ListaDoble<MPointer<int>> lista, int high, int low);
    void quickSort(ListaDoble<MPointer<int>> lista, int low, int high); //funcion recursiva
    void bubbleSort(ListaDoble<MPointer<int>> lista, int size);
public:
    void insertionSort(ListaDoble<MPointer<int>> lista);
    void quickSort(ListaDoble<MPointer<int>> lista);
    void bubbleSort(ListaDoble<MPointer<int>> lista);

    void PrintArray(ListaDoble<MPointer<int>> lista);
};

#endif // SORTS_H
