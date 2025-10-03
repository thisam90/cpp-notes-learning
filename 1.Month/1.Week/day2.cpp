/**********************************************
 * Project   : Day 2 - learning C++
 * File      : day2.cpp
 * Author    : Alex Manolache
 * Created   : 03 10 2025
 * Copyright : (c) 2025 by Alex Manolache
 *
 * Description:
 *   Understand basic program structure and output
 **********************************************/

 #include <iostream>


 int main(){
 
    // Single line comment

    /*
    * Multi line comment
    *
    */
    
    // std::cout <<  - Prints to output
    // std::cin >>   - takes from the input
    // <<  - shift left operator
    // >>  - shift right operator

    std::cout << "Hello World" << std::endl;
    
    // MARK: Exercise 1
    /* Create a program that displays:
    * - Your name
    * - Your age
    * - Your favorite hobby
    */
    {
        std::string name = "Alex";
        int age          = 35;
        std::string favorite_hobby = "swimming";
        
        std::cout << "==============EXERCISE 1==============\n";
        std::cout << "Name: "           << name << std::endl;
        std::cout << "Age: "            << age << std::endl;
        std::cout << "Favorite Hobby: " << favorite_hobby << std::endl;
        std::cout << "=======================================\n";

    }
  

    // MARK: Exercise 2 - Create a formated Info Card
    {
        std::string name = "John Doe";
        int age = 25;
        std::string email = "john@gmail.com";
        std::string phone = "555-1234";
        
        std::cout << "=====EXERCISE 2=========="<< std::endl;
        std::cout << "\t" <<name       << std::endl;
        std::cout << "\t" <<"Age: "    << age << std::endl;
        std::cout << "\t" <<"Email: "  << email << std::endl;
        std::cout << "\t" << "Phone: " << phone << std::endl;
        std::cout << "=========================" << std::endl;

    }


    // MARK: EXERCISE 3 - Player info

    {
        std::cout << "==========EXERCISE 3 ===========" << std::endl;
        std::string player_info = "The Judge";
        std::string player_weapon = "Axe";
        int player_xp = 89;
        int player_health = 100;

        std::cout << "Player Name: " << player_info << std::endl;
        std::cout << "Player Weapons: " << player_weapon << std::endl;
        std::cout << "Player XP: " << player_xp << std::endl;
        std::cout << "Player Health: " << player_health << std::endl;

    }
    




    return (0);
 }