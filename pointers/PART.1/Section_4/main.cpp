/**********************************************
 * Project   : Section_4
 * File      : main.cpp
 * Author    : alexm
 * Created   : 10/10/2025
 * Copyright : (c) 2025 by alexm
 *
 * Description:
 *   ${DESCRIPTION}
 **********************************************/

#include <iostream>

int main() {

    // int x = 5;
    // int *ptr = &x;
    //
    // std::cout << "ptr address: " << ptr  << std::endl;
    // std::cout << "ptr value: "   << *ptr << std::endl;
    //
    // std::cout << "Changing value of the pointer " << std::endl;
    // *ptr = 10;
    // std::cout << "New ptr value: "   << *ptr << std::endl;
    // std::cout << "New ptr address: " << ptr  << std::endl;
    // std::cout << "x value: "         << x    << std::endl;
    //
    // int *iptr = nullptr;
    // // iptr = &x;
    // //*iptr = 10; // noooooo
    // if (iptr == nullptr) {
    //     std::cout << "iptr is null" << std::endl;
    // }else {
    //     std::cout << "iptr value: " << *iptr << std::endl;
    // }

    //MARK: EXERCISE 1
    int n = 9;
    int *iptr =&n;
    *iptr = 15;
    std::cout << *iptr << std::endl;
    // EXERCISE 1 OUTPUT: 15

    //MARK: EXERCISE 2
    int x = 3;
    int *p1 = &x;
    int *p2 = p1;
    *p2 = 10;
    std::cout << x << " " << *p1 << " " << *p2 << std::endl;
    // EXERCISE 2 OUTPUT: 10    10   10


    //MARK: EXERCISE 3
    int v = 20;
    int *p = &v;
    int **pp = &p;

    **pp = 40;
    std::cout << v << " " << *p << " " << **pp << " " << *pp << std::endl;
    //OUTPUT: EXERCISE 3 ->  40 40 40  0x16f0731f4


    //MARK: EXERCISE 4
    int* r;
    *r = 5;
    std::cout << r << std::endl; // segfault
    //OUTPUT: SEGFAULT - first we need to initialize to a null pointer, then use a variables address to point to. a pointer needs a valid address to point at

    //MARK: EXERCISE 5

    int a = 100;
    int b = 200;
    int *pa = &a;
    int *pb = &b;
    pa = pb;
    //OUTPUT: NO COMPILE because adress of pa is not address of pb, plust asign address with = cannot.

    return 0;
}