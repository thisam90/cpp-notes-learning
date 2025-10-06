
/**********************************************
 * Project   : Section 2 : Declaring Pointers
 * File      : section_2.cpp
 * Author    : Alex Manolache
 * Created   : 05 10 2025
 * Copyright : (c) 2025 by Alex Manolache
 *
 * Description:
 *   Pointer Declaration
 **********************************************/


 /* type * pointer_name; */

 #include <iostream>

 int main(){
    /* Always initialize your pointers! An uninitialized pointer contains garbage and is dangerous. */
    
    int *iptr = nullptr; // nullptr is a special keyword representing "no address" or "null pointer"
                         // Dereferencing a nullptr causes a crash (which is better than undefined behavior!)
                         // why nullptr ? -> It's type-safe and unambiguous (clearly a pointer, not an integeri like 0 or NULL)
                         // introduced in C++11
    /*
    *   After: int* ptr = nullptr;
    *
    *   Memory Address  |  Variable  |  Value
    *   ----------------|------------|--------
    *    0x1000         |  ptr       |  0x0 (nullptr)
    *
    *   The pointer ptr exists in memory at address 0x1000,
    *   and it contains the special value nullptr (often represented as 0x0).
    *
    *
    */

    // IMPORTANT: DO NOT DO THE FOLLOWINT
    int *iptr1,iptr2; // iptr will be a pointer to an int, iptr2 will be just an int




    return 0;
 }