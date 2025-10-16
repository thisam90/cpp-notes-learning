#include "../include/Student.hpp"
#include <iostream>

int Student::snexid_ = 1000;

Student::Student(){
    sname_  = "Default";
    sid_    = snexid_++;
    sgpa_   = 0.00;
    std::cout << "[Ctor called] : at address " << this << std::endl;

}
Student::Student(std::string name, double gpa){
    sname_  = name;
    sid_    = snexid_++;
    sgpa_   = gpa;
    std::cout << "[Ctor called] : at address " << this << std::endl;
}

Student::~Student(){
    std::cout << "[Dtor called] : at address " << this << std::endl;
}

void Student::display() const {

    std::cout << "[Name]: " << sname_ << std::endl;
    std::cout << "[ID]: "   << sid_   << std::endl;
    std::cout << "[GPA]: "  << sgpa_  << std::endl;
}

std::string Student::get_name() const {
    return sname_;
}
