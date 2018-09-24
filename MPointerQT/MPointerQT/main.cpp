#include <iostream>
#include "../../MPointer.h"
#include "../../Listas/listadoble.h"

using namespace std;

int main() {

    MPointer<int> c = MPointer<int>();
    MPointer<int> r = MPointer<int>();
    c.operator=(87);
    r.operator=(c);
    *r = 54;


    std::cout << "c "<< c.operator*() << std::endl;
    std::cout << "r "<< r.operator*() << std::endl;
    std::cout<< "&r " << r.operator&()<< std::endl;

    ListaDoble l;
    l.add(1);
    l.add(44);
    l.add(3647);
    l.printL();
}
