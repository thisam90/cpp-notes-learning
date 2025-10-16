#pragma once
#include <string>

class Student {

private:
    std::string sname_;
    int sid_;
    double sgpa_;
    static int snexid_;

public:
    Student();
    Student(std::string name, double gpa);
    ~Student();

    void display() const;

    std::string get_name() const;

};