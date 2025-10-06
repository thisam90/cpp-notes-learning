/**********************************************
 * Project   : Section 3 - Storing Addresses in Pointers
 * File      : section_3.cpp
 * Author    : Alex Manolache
 * Created   : 06 10 2025
 * Copyright : (c) 2025 by Alex Manolache
 *
 * Description:
 *   Storing Address
 **********************************************/

#include <iostream>


int main(){

    /* The Address-of Operator & */
    int num = 43;
    int *iptr = &num;
    std::cout <<"Value address:   " << &num << std::endl;
    std::cout <<"Pointer address: " << iptr << std::endl;
    
    return 0;
}