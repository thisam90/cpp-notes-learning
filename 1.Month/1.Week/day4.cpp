/**********************************************
 * Project   : Day4 - Learning C++
 * File      : day4.cpp
 * Author    : Alex Manolache
 * Created   : 03 10 2025
 * Copyright : (c) 2025 by Alex Manolache
 *
 * Description:
 *   Working with different data types
 *   Understanding type differences 
 *   Example: Mad Libs Generator
 **********************************************/

#include <iostream>
#include <string>

int main(){

    {

        char grade = 'A'; // single quotes - ' ' refering to char
        char symbol = '@';

        std::string name = "Alex";  // double quotes - " " refering to string

        bool isLearning  = true;
        bool is_active   = true;
        bool is_confused = false;

    }
    
    {
        // MARK: Data Type Exploration
         std::cout << "====== DATA TYPE SIZES ======" << std::endl;
         std::cout << "int:    " << sizeof(int)     << " bytes "<< std::endl;
         std::cout << "double: " << sizeof(double)  << " bytes " << std::endl;
         std::cout << "float:  " << sizeof(float)   << " bytes " << std::endl;
         std::cout << "char:   " << sizeof(char)    << " bytes" << std::endl;
         std::cout << "bool:   " << sizeof(bool)    << " bytes" << std::endl;
         std::cout << "====== DATA TYPE SIZES ======" << std::endl;
    }
    /*
  
    {
        // MARK: Example madlibs

        std::string noun = "";
        std::string verb = "";
        std::string adjective = "";
        std::string place = "";
        int number = 0;

        std::cout << "Enter a noun (thing): " ;
        std::cin >> noun;

        std::cout << "Enter a verb (action, - ing form): ";
        std::cin  >> verb;

        std::cout << "Enter an adjective  (describing word): ";
        std::cin  >> adjective;

        std::cout << "Enter a place";
        std::cin  >> place;

        std::cout << "Enter a number: ";
        std::cin  >> number;

        // std::string story = "Last " + adjective + " Tuesday, I decided to visit the " + place + 
        //            ". I brought exactly " + std::to_string(number) + " " + noun + 
        //            "(s) with me because you never know when you'll need them. As I walked through the door, " +
        //            "a stranger looked at me and said, 'Nice " + noun + "!' I didn't know what to say, so I " +
        //            "decided to " + verb + " as fast as possible. Everyone stopped and stared. " +
        //            "It was the most " + adjective + " moment of my life. " +
        //            "I will never " + verb + " at the " + place + " again.";

        std::cout << "Last" << adjective << " Tuesday" << "I decided to visite " << place << std::endl;
        std::cout << "I brought exactly " << number << " " << noun << "with me because you never know when you will need them. " << std::endl;
        std::cout << "As I walked through the door " << "a stranger looked at me and said: " << std::endl;
        std::cout << "Nice " << noun << " !  " << std::endl;
        std::cout << "I didn't know what to say, so I decided to " << verb << "as fast as possible. \n";
        std::cout << "Everyone stopped and stared. " << "It was the most " << adjective << " moment of my life. " << std::endl;
        std::cout << "I will never " << verb << " at the " << place <<  " again. "<< std::endl;

    }
    */
    {
        // std::string firstName = "";
        // std::cout << "Inser Name: " << firstName <<std::endl;
        // std::cin >> firstName ;         // if you type full name : Alex Manolache -> it will only take Alex
        // std::cout << firstName; 
        
        // // MARK: In order to read the whitelines too you need to use getline()
        // std::cout << std::endl;

        std::string full_name = "";
        std::cout << "Inser full name: ";
        std::getline(std::cin,full_name);
        std::cout << full_name;

    }

    return 0;
}