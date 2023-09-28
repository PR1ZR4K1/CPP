/**
 * 
 * Jaylon 
 * Class and Member Function Definitions for Student that inherits Person class
 * 
*/

#include "Student.h"
#include <string>
#include <iostream>

// Constructors

// Default
Student::Student():status(""){}

// Overload
Student::Student(std::string n, std::string a, long num, std::string e, std::string s):
        Person(n, a, num, e), status(s) {}

// Destructor
Student::~Student()
{
    std::cout << "Destroying Student object with name: " << getName() << std::endl;
}

// Getter functions
                        
std::string Student::getStatus()
{
    return status;
}

// Setter Functions

void Student::setStatus(std::string newStatus)
{
    status = newStatus;
}

// virtual function

std::string Student::whatami()
{
    return "Student";
}
