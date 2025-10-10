#include <chrono>
#include <cstddef>
#include <iostream>
#include <memory>


int main(){
    // int *p; // BAD: unintiliaze
    // *p = 10; // unpredictable crash

    // ALWAYS initialize to something, nullptr
    // int x = 54;
    // int *p = nullptr; // no valid address it replaces p = 0 or p = NULL
    // p = &x;
    // std::cout << "x: " << x << std::endl; // 54
    // std::cout << "x address: " << &x << std::endl; // 0x16ddcadd8

    // std::cout << "p: " << *p << std::endl; // 54
    // std::cout << "p address: " << p << std::endl; // 0x16ddcadd8

    // int *ip;
    // double *dp;
    // std::string *sdp;
    // std::cout << sizeof(ip) << std::endl;
    // std::cout << sizeof(dp) << std::endl;
    // std::cout << sizeof(sdp) << std::endl;
    // int val = 10;
    // int *ptr = &val;
    // std::cout << val << " " << *ptr << std::endl;
    // *ptr = 20;
    // std::cout << val << " " << *ptr << std::endl;

    // int a = 5;
    // int b = 9;
    // int *p = &a;
    // p = &b;

    // *p = 99;
    // std::cout << a << " " << b << std::endl;

    // int *q = nullptr;
    // *q = 10; // segment fault
    // std::cout << "q address: " << q << std::endl;
    // std::cout << "q value : " << *q << std::endl;

    // int a = 20;
    // int *int_ptr = &a;

    // std::cout << "Value a " << a << std::endl;
    // std::cout << "Address of a " << &a << std::endl;
    // std::cout << "Value of ptr " << *int_ptr << std::endl;
    // std::cout << "address of ptr " << int_ptr << std::endl;

    // int b = 50;
    // int *intr_ptr_b = &b;

    // -- same process as above ---

    // double c = 30;
    // double *double_ptr = &c;

    // ---- same as above ------


   //  Declare three variables of different types (int, double, std::string).
   int i = 59;
   double d = 89.54;
   std::string s = "Hello";

   // Create pointers to each using the & operator.

   int *iptr = &i;
   double *dptr = &d;
   std::string *sptr = &s;

//    Print:

//     variable name
std::cout << "Variable i " << &i << " : " << i << std::endl;
std::cout << "Pointer iptr " << iptr << " : " << *iptr << std::endl;
// -------- same process for the rest ---------

    return 0;
}