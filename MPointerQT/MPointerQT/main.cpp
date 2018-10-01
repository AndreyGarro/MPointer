#include <iostream>
#include <src/Ordenamientos/InsertionSort.h>
#include "src/MPointer.h"
#include "../Listas/ListaDoble.h"
#include "../MPointerGC/MPointerGC.h"

using namespace std;

int main() {

//    auto GC = MPointerGC::getInstance();

    MPointer<string>::MPointer_init_("127.0.0.1", 5555);
//    auto lista = new ListaDoble<MPointer<int>>();
//    auto ordenamiento = new InsertionSort();

    MPointer<int> ptr1;
    MPointer<int> ptr2;
    MPointer<int> ptr3;
    MPointer<int> ptr4;
    MPointer<int> ptr5;
    MPointer<int> ptr6;
    MPointer<int> ptr7;

    *ptr1 = 2;

    *ptr2 = 45;
    *ptr3 = 4;
    *ptr4 = 15;
    *ptr5 = 89;
    *ptr6 = 1256;
    ptr7 = ptr2;

    cout<<&ptr1<<endl;
    cout<<&ptr2<<endl;
    cout<<&ptr3<<endl;
    cout<<&ptr4<<endl;
    cout<<&ptr5<<endl;
    cout<<&ptr6<<endl;
    cout<<&ptr7<<endl;

    ptr1 = 34;
    cout<<"Cambio hecho en:"<<&ptr1<<endl;

//    cout<<"Este es el valor de: "<<&ptr1<<endl;
//    cout<<&ptr1<<endl;
//    cout<<"Hola : "<<&ptr6<<endl;
//    cout<<&ptr3<<endl;

//    lista->add(ptr1);
//    lista->add(ptr2);
//    lista->add(ptr3);
//    lista->add(ptr4);
//    lista->add(ptr5);
//    lista->add(ptr6);
//    lista->add(ptr7);
//
//    cout<<endl;
//
//    ordenamiento->insertionSort(*lista);
////
//    ordenamiento->PrintArray(*lista);

//    GC->imprimirLista();
////
//    cout << endl;
////
//    ptr1.~MPointer();
////
//    GC->imprimirLista();
////
//    cout<<endl;
////
//    GC->imprimirLista();
////    GC->stopThread();

//-------------------------------------------------Server-------------------------------------------------//


}