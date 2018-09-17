#include <iostream>
#include "MPointer.h"


int main() {
    MPointer<int> c = MPointer<int>();
    MPointer<int> r = MPointer<int>();
    c.operator=(87);
    r.operator=(c);
    *r = 54;


    std::cout << "c "<< c.operator*() << std::endl;
    std::cout << "r "<< r.operator*() << std::endl;
    std::cout<< "&r " << r.operator&()<< std::endl;
}