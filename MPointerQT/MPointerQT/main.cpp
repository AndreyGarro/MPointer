#include <iostream>
#include "../../src/Ordenamientos/Sorts.h"
#include "../../src/MPointer.h"

using namespace std;

int main() {

    auto GC = MPointerGC::getInstance();

    MPointer<string>::MPointer_init_("127.0.0.1", 5555);
    auto lista = new ListaDoble<MPointer<int>>();
    auto ordenamiento = new Sorts();

    MPointer<int> ptr1;
    MPointer<int> ptr2;
    MPointer<int> ptr3;
    MPointer<int> ptr4;
    MPointer<int> ptr5;
    MPointer<int> ptr6;

    *ptr1 = 11;
    *ptr2 = 9;
    *ptr3 = 8;
    *ptr4 = 6;
    *ptr5 = 1;
    *ptr6 = 5;

    cout<<&ptr1<<endl;
    cout<<&ptr2<<endl;
    cout<<&ptr3<<endl;
    cout<<&ptr4<<endl;
    cout<<&ptr5<<endl;
    cout<<&ptr6<<endl;

    ptr1 = 34;
    cout<<"Cambio hecho en:"<<&ptr1<<endl;

    cout<<"Este es el valor de: "<<&ptr1<<endl;
    cout<<&ptr1<<endl;
    cout<<"Hola : "<<&ptr6<<endl;
    cout<<&ptr3<<endl;

    lista->add(ptr1);
    lista->add(ptr2);
    lista->add(ptr3);
    lista->add(ptr4);
    lista->add(ptr5);
    lista->add(ptr6);

    cout<<endl;

    ordenamiento->PrintArray(*lista);
    ordenamiento->bubbleSort(*lista);
    ordenamiento->PrintArray(*lista);

    GC->imprimirLista();

    cout << endl;

    ptr1.~MPointer();

    GC->imprimirLista();
    cout<<endl;

    GC->imprimirLista();
    GC->stopThread();


//-------------------------------------------------Server-------------------------------------------------//


}
