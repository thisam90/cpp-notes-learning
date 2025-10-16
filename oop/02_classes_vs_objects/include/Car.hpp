#pragma once
#include <string>

class Car {
private:
// Attributes or data members
    std::string brand_;
    std::string model_;
    int          year_;
   double  fuel_level_;
   bool    is_running_;
   int        mileage_;
   


public:

// Ctor - method when object is created
Car(std::string brand,std::string make,int year);

//Dtor - method when object ends its lifecycle
~Car();

//MARK: member functions
void start_engine();
void stop_engine();
void drive();
void refuel(double amt);
void display_status()const;
int get_mileage() const;

};