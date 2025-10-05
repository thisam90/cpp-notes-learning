/**********************************************
 * Project   : Pointers
 * File      : main.cpp
 * Author    : Alexandru Lucian Manolache
 * Created   : 05 10 2025
 * Copyright : (c) 2025 by Alexandru Lucian Manolache
 *
 * Description:
 *   What is a pointer?
 *   Understanding memory addresses
 *   Pointers vs regular variables
 *   Visual representation of pointers in memory
 *   Why pointers exist
 **********************************************/

#include <iostream>

int main(int argc, const char * argv[]) {

    /* ============================================================================
    * POINTERS IN C
    * ============================================================================ */

    /* 
    * DEFINITION: 
    * A pointer is a variable that stores a memory address. Instead of holding 
    * actual data values (e.g., 43, 'a', 3.14), a pointer contains the location 
    * in memory where that data resides.
    * 
    * ANALOGY:
    * Think of memory like an apartment building:
    *   - Regular variables are apartments containing furniture (the actual data)
    *   - Pointers are pieces of paper with apartment addresses written on them
    *   - When you have the address, you can visit that apartment to view or 
    *     modify the furniture inside
    */
    

    /*
    *   Memory Address  |  Variable Name  |  Value
    *   ----------------|-----------------|--------
    *    0x1000         |                 |  42
    *    0x1004         |  x              |  42      ← Regular variable
    *    0x1008         |  ptr            |  0x1004  ← Pointer (stores address of x)
    *    0x100C         |                 |  100
    *
    *
    */

    /*
    *   Why do we need pointers ?
    *   1.DYNAMIC MEMORY: Allocate memory at runtime when you don't know size at compile time
    *   2.Efficiency: Pass large objects to functions without copying them
    *   3.Data Structures: Build linked lists, trees,graphs
    *   4.Resource Management: Control when objects are created/destroyed
    *   5.Interfacing: Work with hardware, OS, and low-level systems.
    *
    */


    int x = 42;
    int* iptr = &x;

    std::cout << "Value of x: " << x << std::endl;
    std::cout << "Address of x: " << &x <<std::endl;
    std::cout << "Address of iptr: " << iptr << std::endl;
    std::cout << "Value of iptr: " << *iptr << std::endl;
    
    
    return EXIT_SUCCESS;
}
