#include "../include/BankAccount.hpp"
#include <iostream>

BankAccount::BankAccount(std::string name, double initial){
    owner_   = name;
    balance_ = initial;
}

BankAccount::~BankAccount(){}

void BankAccount::deposit(double amount){
    if(amount < 0 ) balance_ += 0;
    balance_ += amount;
}

void BankAccount::withdraw(double amount){
    if(amount > 0 && amount <= balance_){
        balance_ -= amount;
    }
    
}

void BankAccount::display() const {
    std::cout << owner_ << "'s balance: $" << balance_ << std::endl;

}

double BankAccount::get_balance() const {
    return balance_;
}