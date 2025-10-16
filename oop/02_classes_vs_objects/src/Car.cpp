#include "../include/Car.hpp"
#include <functional>
#include <iostream>

Car::Car(std::string brand, std::string make, int year){
    brand_ = brand;
    model_ = make;
    year_  = year;

    fuel_level_ = 50.0;
    is_running_ = false;
    mileage_    = 345;

    std::cout << "New car created: "   << std::endl;
    std::cout << "[Brand]: " << brand_ << std::endl;
    std::cout << "[Model]: " << model_ << std::endl;
    std::cout << "[Year ]: " << year_  << std::endl;

}

Car::~Car(){
    std::cout << "Dtor called " << std::endl;
};


void Car::start_engine(){
    if(fuel_level_ > 0){
        is_running_ = true;
        std::cout << "Engine started...." << std::endl;
    }else{
        std::cout << "No fuel.... " << std::endl;
    }
}

void Car::stop_engine(){
    if (is_running_){
        is_running_ = false;
        std::cout << "Engine stopped... " << std::endl;
    }else {
        std::cout << "Engine already stopped...." << std::endl;
    }
}

 void Car::drive(){
    //MARK: can be done better, this is just a fast one mate :)
    if(fuel_level_ > 0 && is_running_){
        std::cout << "Driving..." << std::endl;
    }else{
        std::cout << "start engine first.. " << " make sure yoou have enough fuel " << std::endl;
    }
 }

 void Car::refuel(double amt) {

    fuel_level_ += amt;
    
    if(fuel_level_ >= 100){
        fuel_level_ = 100;
    }
    std::cout << "[FUEL LEVEL] : " << fuel_level_ << std::endl;
 }

 void Car::display_status()const{

    std::cout << "[Brand]: "        << brand_      << std::endl;
    std::cout << "[Model]: "        << model_      << std::endl;
    std::cout << "[Year ]: "        << year_       << std::endl;
    std::cout << "[Fuel Level]: "   << fuel_level_ << std::endl;
    std::cout << "[Status]: "       << is_running_ << std::endl;
    std::cout << "[Mileage]: "      << mileage_    << std::endl;

 }

 int Car::get_mileage()const {
    return mileage_;
 }