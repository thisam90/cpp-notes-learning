/**********************************************
* Project   : 03.01.BankAccountConsole
 * File      : BankAccount.cpp
 * Author    : alexm
 * Created   : 16/10/2025
 * Copyright : (c) 2025 by alexm
 *
 * Description:
 *   Simple BankAccount
 **********************************************/

#include <utility>

#include "../include/BankAccount.h"

#include <iostream>
#include <ostream>
BankAccount::BankAccount() : cname_("Unknown"), cbalance_(0) {}

BankAccount::BankAccount(std::string customer, double balance) {
  cname_    = std::move(customer);
  cbalance_ = balance;

}
BankAccount::~BankAccount() = default;

void BankAccount::deposit(double amount) {
    if (amount > 0) {
      cbalance_ += amount;
    }else {
      std::cout << "Invalid amount." << std::endl;
    }
}
void BankAccount::withdraw(double amount) {
  if (amount > 0 && amount <= cbalance_) {
    cbalance_ -= amount;
  }else {
    std::cout << "Invalid amount or funds not available" << std::endl;
  }
}
void BankAccount::display() const {
  std::cout << cname_ << std::endl;
  std::cout << cbalance_ << std::endl;
}