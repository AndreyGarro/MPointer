#include <iostream>
#include "MPointer.h"
#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void threadFunc()
{
    cout<<"hola"<<endl;
}

int main() {
    thread t1 (threadFunc);
    t1.join();
    return 0;
//    MPointer<int> c = MPointer<int>();
//    MPointer<int> r = MPointer<int>();
//    c.operator=(87);
//    r.operator=(c);
//    *r = 54;
//
//
//    std::cout << "c "<< c.operator*() << std::endl;
//    std::cout << "r "<< r.operator*() << std::endl;
//    std::cout<< "&r " << r.operator&()<< std::endl;
}