/**********************************************
 * Project   : Section_6: Pointer Arithmetic
 * File      : main.cpp
 * Author    : Alex Manolache
 * Created   : 06 10 2025
 * Copyright : (c) 2025 by Alex Manolache
 *
 * Description:
 *  Pointer Arithmetic
 * ********************************************/

#include <iostream>

int main() {

    int player_score[5] = {1, 2, 3, 4, 5};
    int const *sptr = &player_score[0]; // 1
    std::cout << *sptr << std::endl; // output: 1
    sptr = sptr + 1;
    std::cout << *sptr << std::endl; // 2

    // iptr = ptr + 1; // new_address = old_address + (n × sizeof(type))

    /* Memory Layout */

    //     Address  | Value | Index
    // ---------|-------|-------
    // 0x1000   |  10   | arr[0]  ← ptr points here
    // 0x1004   |  20   | arr[1]
    // 0x1008   |  30   | arr[2]
    // 0x100C   |  40   | arr[3]
    // 0x1010   |  50   | arr[4]
    //

    int numbers[5] = {10, 20, 30, 40, 50};
    int const *ptr = numbers;

    std::cout << "Address of ptr: "  << ptr  << std::endl;
    std::cout << "Value of ptr: "    << *ptr << std::endl;

    ptr++; // Move to next element

    std::cout << "After ptr++: "   << ptr  << std::endl; // 0x1004 (moved 4 bytes)
    std::cout << "Value at ptr: "  << *ptr << std::endl;

    ptr += 2; // Move 2 more elements
    std::cout << "After ptr++: "   << ptr  << std::endl; // 0x16ce931ac
    std::cout << "Value at ptr: "  << *ptr << std::endl; // 40



    // MARK: Pointer Difference
    // You can subtract two pointers to find the number of elements between them:

    int arr[5] = {10,20,30,40,50};

    int const *start = &arr[0];
    int const *end   = &arr[5];

    int distance = end - start;
    std::cout << "Distance from start: "  << distance << std::endl;

    // MARK: Comparison Operations

    int const *ptr1 = &arr[1];
    int const *ptr2 = &arr[3];

    std::cout << "ptr1: " << ptr1 << std::endl;
    std::cout << "ptr2: " << ptr2 << std::endl;

    if (ptr1 < ptr2) { std::cout << "ptr1 < ptr2" << "true" << std::endl; }
    if (ptr2 > ptr1) { std::cout << "ptr2 > ptr1" << "true" << std::endl; }
    if (ptr1 == &arr[1]) { std::cout << "ptr1 == &arr[1]" << "true" << std::endl; }

    // MARK: Traversing Arrays with Pointer Arithmetic
    // METHOD 1 : Array indexing

    int scores[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++) {
        std::cout << scores[i] << " " << std::endl;
    }

    // METHOD 2 : Pointer arithmetic
    std::cout << "=======POINTER ARITHMETIC======="<< std::endl;
    int const *ptr_scores = &scores[0];
    for (int i = 0; i < 5; i++) {
        std::cout << *(ptr_scores + i) << " " << std::endl;
    }

    // METHOD 3 : Moving the pointer

    std::cout << "=========MOVING THE POINTER=======" << std::endl;

    for (int i = 0; i < 5; i++) {
        std::cout << *(ptr_scores) << " " << std::endl;
        ptr_scores++;
    }

    // Array indexing vs Pointer Arithmetic
    // arr[i]  ≡  *(arr + i)
    std::cout << "========== ARRAY INDEXING ==========" << std::endl;
    std::cout << scores[2] << " " << std::endl; // 30
    std::cout << *(ptr_scores + 2) << " " << std::endl;


    return 0;

}