#include "../include/Helper.hpp"
#include <cstdint>
#include <iostream>

#define BUFFER_ZONE 100000

void smlocation(const std::string& variable, void* address){

    static int sv = 0;
    static int hv = 0;

    void* ha = static_cast<void*>(new int);

    if((uintptr_t) address > (uintptr_t)sv - BUFFER_ZONE && (uintptr_t) address < (uintptr_t)sv + BUFFER_ZONE){
        std::cout << "STACK" << std::endl;
    }else{
        std::cout << "HEAP" << std::endl;
    }

    delete static_cast<int*>(ha);

}
