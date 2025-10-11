/**********************************************
 * Project   : section_6
 * File      : ${NAME}.cpp
 * Author    : alexm
 * Created   : 11/10/2025
 * Copyright : (c) 2025 by alexm
 *
 * Description:
 *  Pointer arithmetics
 **********************************************/

#include <iostream>

void print_array(int *start, int *end) {
    for (int *p = start; p!= end; p++) {
        std::cout << *p << " ";
    }
}


int main() {

    // INCREMENTING and Decrementing

    // int arr[3] = {10,20,30};
    // int *p = &arr[0];
    // std::cout << *p << std::endl; // 10
    // p++;
    // std::cout << *p << std::endl; // 20
    // p++;
    // std::cout << *p << std::endl; // 30
    // p--;
    // std::cout << *p << std::endl;
    // p--;
    // std::cout << *p << std::endl;
    //
    // // You can use offfets
    //
    // int *start = &arr[0];
    // int *end = arr + 2;
    // std::cout << *start << *end << std::endl;
    // std::cout << "3rd:" << *(start + 2) << std::endl;
    //
    // ptrdiff_t diff = end - start;
    // std::cout << diff << std::endl;
    //
    // MARK: Exercise 1 — Pointer Walk
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = arr;
    for (int i = 0; i < 10; i++) {
        std::cout << *p << std::endl;
        (p++);
    }

    int nums [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    print_array(nums, nums + 10);


    return 0;
}