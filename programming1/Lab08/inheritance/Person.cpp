/**
 * 
 * Jaylon 
 * Class and Member Function Definitions for Person
 * 
*/

#include "Person.h"
#include <string>
#include <iostream>

// Constructors

// Default
Person::Person():name(""), address(""), phoneNumber(0), email(""){}

// Overload
Person::Person(std::string n, std::string a, long num, std::string e):
        name(n), address(a), phoneNumber(num), email(e){}

// Destructor
Person::~Person(){
    std::cout << "Destroying Person object with name: " << name << std::endl;
}

// Getter functions
                        
std::string Person::getName()
{
    return name;
}

std::string Person::getAddress()
{
    return address;
}

std::string Person::getEmail()
{
    return email;
}

long Person::getNumber()
{
    return phoneNumber;
}

// Setter Functions

void Person::setName(std::string newName)
{
    name = newName;
}
void Person::setAddress(std::string newAddress)
{
    address = newAddress;
}
void Person::setNumber(long newNumber)
{
    phoneNumber = newNumber;
}
void Person::setEmail(std::string newEmail)
{
    email = newEmail;
}

std::string Person::whatami()
{
    return "Person";
}   
