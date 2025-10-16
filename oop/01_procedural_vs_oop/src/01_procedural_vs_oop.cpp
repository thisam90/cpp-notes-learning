/**********************************************
 * Project   : Procedural vs OOP
 * File      : 01_procedural_vs_oop.cpp
 * Author    : Alex Manolache
 * Created   : 16 10 2025
 * Copyright : (c) 2025 by Alex Manolache
 *
 * Description:
 *   Procedural vs OOP
 **********************************************/

 #include <iostream>
 #include "../include/procedure.hpp"
 #include "../include/BankAccount.hpp"


 int main(){
    double account1_balance     = 1000.00;
    std::string account1_owner  = "Alice";

    double account2_balance          = 500.00;
    std::string account2_owner       = "Bob";

    procedural_display(account1_owner, account1_balance);
    procedural_deposit(account1_balance, 200);
    procedural_display(account1_owner, account1_balance);

    std::cout << "================ OOP ================ " << std::endl;

    BankAccount b1("John",2000);
    b1.display();
    b1.withdraw(200);
    b1.display();
    b1.deposit(500);
    b1.display();

    BankAccount b2("Bobby", 8900);
    b2.display();
    std::cout << "Balance: " << b2.get_balance() << std::endl;

    return (0);
 }