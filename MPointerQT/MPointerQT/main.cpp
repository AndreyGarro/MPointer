#include <iostream>
#include "../../src/Ordenamientos/Sorts.h"
#include "../../src/MPointer.h"

using namespace std;

int main() {

    auto GC = MPointerGC::getInstance();

    MPointer<int> ptr1;
    MPointer<string> ptr2;
    MPointer<char> ptr3;
    MPointer<int> ptr4;
    MPointer<int> ptr5;
    MPointer<int> ptr6;
    MPointer<int> ptr7;

    *ptr1 = 11;
    *ptr2 = "9";
    *ptr3 = 'h';
    *ptr4 = 6;
    *ptr5 = 1;
    *ptr6 = 5;
    ptr7 = ptr1;

    GC->imprimirLista();

//    ptr1.~MPointer();
//    cout<<endl;
//    GC->imprimirLista();

//    ptr7.~MPointer();
//    cout<<endl;
//    GC->imprimirLista();


//    GC->stopThread();

//-------------------------------------------------Server-------------------------------------------------//

//    MPointer<string>::MPointer_init_("127.0.0.1", 5555);
//    auto lista = new ListaDoble<MPointer<int>>();
//    auto ordenamiento = new Sorts();
//
//    // Pruebas de diferentes tipos de datos en el servidor.
//    MPointer<long> l;
//    l = 2334;
//    cout << "El long es: " << &l << endl;
//
//    MPointer<char> c;
//    c = 's';
//    cout << "El char es: " << &c << endl;
//
//    MPointer<float> f;
//    *f = 1.4;
//    cout << "El float es: " << &f << endl;
//
//    MPointer<bool> b;
//    *b = true;
//    cout << "El bool es: " << &b << endl;
//
//    MPointer<int> i;
//    *i = 145;
//    cout << "El int es: " << &i << endl;
//
//    MPointer<double> d;
//    *d = 1.4567;
//    cout << "El double es: " << &d << endl;
//
//    // Asignación de enteros para los ordenamientos
//    MPointer<int> ptr1;
//    MPointer<int> ptr2;
//    MPointer<int> ptr3;
//    MPointer<int> ptr4;
//    MPointer<int> ptr5;
//    MPointer<int> ptr6;
//
//    *ptr1 = 11;
//    *ptr2 = 9;
//    *ptr3 = 8;
//    *ptr4 = 6;
//    *ptr5 = 1;
//    *ptr6 = 5;
//
//    // Añadir los elementos a la lista.
//    lista->add(ptr1);
//    lista->add(ptr2);
//    lista->add(ptr3);
//    lista->add(ptr4);
//    lista->add(ptr5);
//    lista->add(ptr6);
//
//    // Ordenar los elementos de la lista.
//    ordenamiento->PrintArray(*lista);
//    ordenamiento->quickSort(*lista);
//    ordenamiento->PrintArray(*lista);
}
