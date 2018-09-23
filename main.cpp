#include <iostream>
#include "MPointer.h"
#include "MPointerGC/MPointerGC.h"

#include <iostream>
#include "Listas/ListaSimple.h"
using namespace std;

int main() {
//
//    MPointerGC *GC = MPointerGC::getInstance();
//
//    cout<<MPointerGC::isActive()<<endl;

    ListaSimple<MPointer<int>> lista;
    auto *p1 = new MPointer<int>();
    *p1 = 2;
    lista.insertarNodo(p1);

    auto *p2 = new MPointer<int>();
    *p2 = 8;
    lista.insertarNodo(p2);

    auto *p3 = new MPointer<int>();
    *p3 = 9;
    lista.insertarNodo(p3);

    for(int x=0; x<3; x++){
        MPointer<int> l = lista.getDato(x);
        cout<<*l<<endl;
    }

    return 0;
}