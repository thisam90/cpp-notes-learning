/**********************************************
 * Project   : 02.Classes vs Objects
 * File      : main.cpp
 * Author    : Alex Manolache
 * Created   : 16 10 2025
 * Copyright : (c) 2025 by Alex Manolache
 *
 * Description:
 *   Classes vs Objects
 * Classes - blueprint with data members and methods.
 * Classes are like cookie cutters, where the cutter is the class
 * and the cookies the objects
 * No memory is allocated when define Class
 * Objects are created from the blueprint with a copy of their own
 * data members and methods.
 **********************************************/

#include <iostream>
#include <vector>
#include "../include/Car.hpp"

int main(){
        
    std::cout << " =================================================== " << std::endl;

    Car myCar("Toyota", "Camry", 2022);

    myCar.start_engine();
    myCar.drive();
    myCar.refuel(34.54);
    myCar.display_status();
    myCar.stop_engine();

    std::cout << " =================================================== " << std::endl;

    Car friendsCar("Honda", "Civic", 2023);

    friendsCar.start_engine();
    friendsCar.drive();
    friendsCar.refuel(34.54);
    friendsCar.display_status();
    friendsCar.stop_engine();

    std::cout << " =================================================== " << std::endl;

    Car *anotherCar = new Car("Bmw", "X5", 2025);
    anotherCar->display_status();
    anotherCar->start_engine();
    //...etc....//

    std::cout << " =================================================== " << std::endl;
    std::cout << " =================================================== " << std::endl;

    std::vector<Car> cdealership;
    cdealership.push_back(Car("Tesla", "Model 3", 2024));
    cdealership.push_back(Car("BMW", "X5", 2023));
    cdealership.push_back(Car("Ford", "Mustang", 2024));

    for(Car car: cdealership){
        car.display_status();
    }


    delete anotherCar;
    return 0;
}