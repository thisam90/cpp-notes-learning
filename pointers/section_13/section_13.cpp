/**********************************************
 * Project   : Section 13
 * File      : section_13.cpp
 * Author    : Your Name
 * Created   : 09 10 2025
 * Copyright : (c) 2025 by Your Name
 *
 * Description:
 *   Const References
 **********************************************/

#include <iostream>


int main(){

    int x = 10;
    const int& ref = x;

    x = 20;
    //ref = 30; // ERROR: Cannot assign to variable 'ref' with const-qualified type 'const int &'clang(typecheck_assign_const)
    std::cout << ref; // 20

    const int y = 100;
    // const int& ref2 = y;// cannot  

    const int& ref3 = 50;
    std::cout << "ref3: " << ref3;

    return 0;
}