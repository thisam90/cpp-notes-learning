#pragma once
#include <string>

class BankAccount {
private:

    std::string owner_;
    double      balance_;
    
public:

    BankAccount(std::string name, double initial);
    ~BankAccount();

    void deposit(double amount);
    void withdraw(double amount);

    void display() const;
    double get_balance() const;
    

};