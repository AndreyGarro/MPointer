#include <iostream>
#include "MPointer.h"
#include "MPointerGC/MPointerGC.h"

#include <iostream>
using namespace std;

int main() {

    cout<<MPointerGC::isActive()<<endl;

    MPointerGC *GC = MPointerGC::getInstance();

    cout<<MPointerGC::isActive()<<endl;

    return 0;
}