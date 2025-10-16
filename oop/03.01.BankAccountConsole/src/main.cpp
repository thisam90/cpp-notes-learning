/**********************************************
 * Project   : 03.01.BankAccountConsole
 * File      : main.cpp
 * Author    : alexm
 * Created   : 16/10/2025
 * Copyright : (c) 2025 by alexm
 *
 * Description:
 *   Simple BankAccount
 **********************************************/

#include "../include/BankAccount.h"

#include <iostream>

int main() {
  BankAccount frank {"Frank",500.0};
  frank.display();
  std::cout << "-------" << std::endl;
  frank.deposit(100.0);
  frank.display();
  std::cout << "-------" << std::endl;
  frank.withdraw(50.0);
  frank.display();
  std::cout << "-------" << std::endl;

    return 0;
}
