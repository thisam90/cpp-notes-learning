/**********************************************
 * Project   : Section 7
 * File      : section_7.cpp
 * Author    : Alex Manolache   
 * Created   : 06 10 2025
 * Copyright : (c) 2025 by Alex Manolache 
 *
 * Description:
 *   Relationship between pointer and arrays
 **********************************************/

 #include <iostream>


 int main(){

    //MARK: How do you declare an array?
    int playerscores[5] = {40,80,23,56,89};

    //MARK: How do you access elements?
    std::cout << playerscores[0] << " first element "   << std::endl;
    std::cout << playerscores[1] << " second element "  << std::endl;

    int num = 42;
    int *ptr = &num; // address of num

    std::cout << ptr << " - address of num " << std::endl;
    std::cout << *ptr << " - dereferencing the pointer " << std::endl;

    int scores[] = {100,95,89};
    int *score_ptr = scores;

    std::cout << scores + 0 << std::endl; // 0x16b1e3110
    std::cout << scores + 1 << std::endl; // 0x16b1e3114
    std::cout << scores + 2 << std::endl; // 0x16b1e3118

    std::cout << " ========== " << std::endl;
    std::cout << *(scores + 0) << std::endl; // 100
    std::cout << *(scores + 1) << std::endl;
    std::cout << *(scores + 2) << std::endl;

    /* General rule: array[index] = *(array + index) */

    

    
    return 0;
 }