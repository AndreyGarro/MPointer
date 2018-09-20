//
// Created by andrew on 19/09/18.
//

#include <iostream>
#include "MPointerGC.h"
#include <chrono>
#include <thread>

bool MPointerGC::active = false;
MPointerGC* MPointerGC::instance = nullptr;

void MPointerGC::contar() {
    int x=0;
    while (x<100){
        cout<<x<<endl;
        x++;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }

}

bool MPointerGC::isActive() {
    return active;
}

MPointerGC *MPointerGC::getInstance() {
    if(!instance){
        instance = new MPointerGC();
    }
    active = true;
    return instance;
}

void MPointerGC::addPointer(MPointer<int> nuevo) {
    array += *nuevo;
}

