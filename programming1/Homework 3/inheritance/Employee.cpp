/**
 * 
 * Jaylon 
 * Class and Member Function Definitions for Employee that inherits Person class
 * 
*/

#include "Employee.h"
#include <string>
#include <iostream>

// Constructors

// Default
Employee::Employee():salary(0), dateHired("") {}

// Overload
Employee::Employee(std::string n, std::string a, long num, std::string e, int s, std::string dH):
        Person(n, a, num, e), salary(s), dateHired(dH) {}

// Destructor
Employee::~Employee()
{
    std::cout << "Destroying Employee object with name: " << getName() << std::endl;
}

// Getter functions
                        
int Employee::getSalary()
{
    return salary;
}

std::string Employee::getDateHired()
{
    return dateHired;
}

// Setter Functions

void Employee::setSalary(int newSalary)
{
    salary = newSalary;
}

void Employee::setDateHired(std::string newDate)
{
    dateHired = newDate;
}

std::string Employee::whatami()
{
    return "Employee";
}
