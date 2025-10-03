/**********************************************
 * Project   : Day3 - Learning C++
 * File      : day3.cpp
 * Author    : Alex Manolache
 * Created   : 03 10 2025
 * Copyright : (c) 2025 by Alex Manolache
 *
 * Description:
 *   What is a variable ?
 *   Variable declaration
 *   Variable initialization
 *   Variable naming rules ( cameCase, snake_case )
 **********************************************/

 #include <iostream>
#include <ostream>


int main(){

    // MARK: What is a variable
    // A variable is a named box in memory that holds a value of a specific type
    int age = 25;
    int player_score = 56;
    const double pi = 3.14159; // read-only variable

    int some_other;
    some_other = 45;

    // MARK: EXERCISE SIMPLE MATH

    {
        // Ask user for two numbers
        // Store the values 
        // Calculate: sum, difference, product, quotient
        // Display all results
        int first_number = 0;
        int second_number = 0;
        std::cout << "Enter first number: ";
        std::cin  >> first_number;
        std::cout << "\n";
        std::cout << "Enter second number: ";
        std::cin  >> second_number;
        std::cout << "\n";

        std::cout << "Sum: " << first_number + second_number << std::endl;
        std::cout << "Difference: " << first_number - second_number << std::endl;
        std::cout << "Product: " << first_number * second_number << std::endl;
        std::cout << "Quotient: " <<  first_number/ second_number << std::endl;
        
    }

    return 0;
}