/**********************************************
 * Project   : Section 8
 * File      : section_8.cpp
 * Author    : Alex Manolache
 * Created   : 06 10 2025
 * Copyright : (c) 2025 by Alex Manolache
 *
 * Description:
 *   Pass-by-Reference with Pointers
 **********************************************/

/* Pass-by-value makes a copy - changes inside the function don't
 * affect the original 
 */

 /* Pointers gives us the address - so we can access and modify the 
  * original value
  *
  */

  /*
  *     When to use pointer parameters:
  *  - Function modifies the parameter
  *  - Parameter is expensive to copy
  *  - It's OK if the the parameter might be nullptr
  *
  *     Use reference parameters when:
  *  - Function modifies the parameter
  *  - Parameter is expensive to copy
  *  - Parameter will never be nullptr
  *
  */

#include <iostream>
#include <ostream>

void changeValue(int x){
    x = 100;

}

void double_data(int *iptr){
    *iptr *= 2; // dereferences to access and modify the actual value
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* Best practice: Always check for nullptr when accepting pointer parameters:
*/

void add_value(int *ptr, int value){
    if(ptr == nullptr){
        std::cout << " nullptr " << std::endl;
    }

    *ptr += value;
}



int main(){
    
    int num = 5;
    std::cout<< "Num: " << num << std::endl;
    std::cout << "calling function \n";
    
    changeValue(5);
    std::cout << "num: " << num << std::endl;

    /*===========================================*/
    double_data(&num);
    std::cout << "num * 2 = " << num << std::endl;

    /*==========================================*/
    int a = 10;
    int b = 20;
    std::cout << "a = " << a << " | " << "b = " << b << std::endl;
    std::cout << "swapping .... " << std::endl;
    swap(&a, &b);
    std::cout << "a = " << a << " | " << "b = " << b << std::endl;


    /*===========================================*/
    int value = 20;
    std::cout << "Value: " << value << std::endl;
    add_value(&value, 5);
    std::cout << "value : " << value << std::endl;




    return 0;
}

