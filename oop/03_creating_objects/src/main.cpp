/**********************************************
 * Project   : 03.Creating Objects
 * File      : main.cpp
 * Author    : Alex Manolache
 * Created   : 16 10 2025
 * Copyright : (c) 2025 by Alex Manolache
 *
 * Description:
 *   Creating objects
 **********************************************/

#include <iostream>
#include "../include/Student.hpp"
#include "../include/Helper.hpp"



int main(){
    
    Student alice ("Alice",3.83);
    Student bob ("Bob", 5.65);

    smlocation("alice", &alice);
    smlocation("bob", &bob);

    alice.display();
    bob.display();






    return 0;
}