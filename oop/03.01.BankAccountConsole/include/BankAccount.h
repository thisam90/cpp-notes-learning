/**********************************************
* Project   : 03.01.BankAccountConsole
 * File      : BankAccount.h
 * Author    : alexm
 * Created   : 16/10/2025
 * Copyright : (c) 2025 by alexm
 *
 * Description:
 *   Simple BankAccount
 **********************************************/

#ifndef INC_03_01_BANKACCOUNTCONSOLE_BANKACCOUNT_H
#define INC_03_01_BANKACCOUNTCONSOLE_BANKACCOUNT_H
#include <string>

class BankAccount {
private:
  std::string cname_;
  double cbalance_;

public:
  BankAccount();
  BankAccount(std::string customer, double balance);
  ~BankAccount();

  void deposit(double amount);
  void withdraw(double amount);
  void display() const;


};

#endif // INC_03_01_BANKACCOUNTCONSOLE_BANKACCOUNT_H
