#include "../include/procedure.hpp"
#include <iostream>

void procedural_deposit(double &balance, double amount){
    if (amount > 0){
        balance += amount;
    }
    std::cout << "Deposited: $" << amount << std::endl;
}

void procedural_display(const std::string &owner, double balance){
    std::cout << " Owner: "  << owner   << std::endl;
    std::cout << "Balance: " << balance << std::endl;
}