cmake_minimum_required(VERSION 4.0)
project(03_01_BankAccountConsole)

set(CMAKE_CXX_STANDARD 20)

add_executable(03_01_BankAccountConsole ../src/main.cpp
        ../src/BankAccount.cpp
        ../include/BankAccount.h)
