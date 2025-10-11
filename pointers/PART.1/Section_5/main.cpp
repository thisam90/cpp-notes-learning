/**********************************************
 * Project   : Section_5
 * File      : ${NAME}.cpp
 * Author    : alexm
 * Created   : 11/10/2025
 * Copyright : (c) 2025 by alexm
 *
 * Description:
 *   ${DESCRIPTION}
 **********************************************/

#include <iostream>

// Write a function that allocates memory but never deletes it.
void allocate_memory() {
    int *arr = new int[10]();
    for (int i = 0; i < 10; i++) {
        arr[i] = i + 20;
    }
}

int main() {

    // int *p = new int;
    // *p = 10;
    // std::cout << *p << std::endl;
    // delete p;
    // p = nullptr;
    // if (p == nullptr) {
    //     std::cout << "p is null" << std::endl;
    // }
    //
    // // MARK: Allocating Arrays Dynamically
    //
    // int * arr = new int[10];
    // for (int i = 0; i < 10; i++) {
    //     arr[i] = i*10;
    // }
    // for (int i = 0; i < 10; i++) {
    //     std::cout << arr[i] << std::endl;
    // }
    //
    // delete arr;
    // arr = nullptr;

    //MARK EXERCISE 1:

    int *num = new int;
    *num = 77;
    std::cout << *num << std::endl;
    delete num;
    num = nullptr;
    // ANSWER: if you ommit delete you will have a memory leak, also it needs to
    // be inialize also to nullptr : so after delete num; num = nullptr;

    // MARK EXERCISE 2:
    // Allocate an array of 10 integers on the heap,
    // fill it with multiples of 5, print, and then delete it.
    int *arr = new int[10]();
    for (int i = 0; i < 10; i++) {
        arr[i] = i * 5;
    }
    for (int i = 0; i < 10; i++) {
        std::cout << arr[i] << std::endl;
    }
    delete[] arr;
    arr = nullptr;

    //MARK: Exercise 3 — Zero Initialization
    int *data = new int[3]();
    std::cout << data[0] << data[1] << data[2] << std::endl;
    delete[] data;
    data = nullptr;
    //OUTPUT: using new int[3](); -> 3 memories with 0

    //MARK: Exercise 4 — Mixing Heap and Stack
    int a = 42;
    int* p = &a;
    delete p;
    // OUTPUT: it is invalid because we need to set the p to nullptr : p = nullptr;
    p = nullptr;


    //MARK: Exercise 5 — Leak Test
    bool is_valid = true;
    char c = '0';
    while (is_valid) {
        allocate_memory();
        std::cout << "Continue: ... " ;
        std::cin >> c;
        if (c == 'q') {
            is_valid = false;
            break;
        }
        allocate_memory();
    }
    //output: Section_5(3266,0x1f3cc0800) malloc: *** error for object 0x16da9b1f4: pointer being freed was not allocated
    // Section_5(3266,0x1f3cc0800) malloc: *** set a breakpoint in malloc_error_break to debug


    return 0;
}