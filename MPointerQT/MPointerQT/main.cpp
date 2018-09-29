#include <iostream>
#include <src/Ordenamientos/InsertionSort.h>
#include "src/MPointer.h"
#include "../Listas/ListaDoble.h"
#include "../MPointerGC/MPointerGC.h"

using namespace std;

int main() {


    auto GC = MPointerGC::getInstance();
    auto lista = new ListaDoble<MPointer<int>>();
    auto ordenamiento = new InsertionSort();

    MPointer<int> ptr1;
    MPointer<int> ptr2;
    MPointer<int> ptr3;
    MPointer<int> ptr4;
    MPointer<char> ptr5;
    MPointer<int> ptr6;
    MPointer<int> ptr7;

    *ptr1 = 2;
    *ptr2 = 4;
    *ptr3 = 6;
    *ptr4 = 15;
    *ptr5 = 's';
    *ptr6 = 1;
    *ptr7 = 8;

//    lista->add(ptr1);
//    lista->add(ptr2);
//    lista->add(ptr3);
//    lista->add(ptr4);
//    lista->add(ptr5);
//    lista->add(ptr6);
//    lista->add(ptr7);

    cout<<endl;

    ordenamiento->insertionSort(*lista);

    ordenamiento->PrintArray(*lista);

    GC->imprimirLista();
//
    cout << endl;

    ptr1.~MPointer();

    GC->imprimirLista();

    cout<<endl;

    GC->imprimirLista();
    GC->stopThread();

//-------------------------------------------------Server-------------------------------------------------//


}