/**
 * 
 * Jaylon 
 * Class and Member Function Definitions for Staff that inherits Employee class
 * 
*/

#include "Staff.h"
#include <string>
#include <iostream>

// Constructors

// Default
Staff::Staff():position("") {}

// Overload
Staff::Staff(std::string n, std::string a, long num, std::string e, int s, std::string dH, std::string pos):
        Employee(n, a, num, e, s, dH), position(pos) {}

// Destructor
Staff::~Staff()
{
    std::cout << "Destroying Staff object with name: " << getName() << std::endl;
}

// Getter functions
                        
std::string Staff::getPosition()
{
    return position;
}

// Setter Functions

void Staff::setPosition(std::string newPosition)
{
    position = newPosition;
}

// virtual function

std::string Staff::whatami()
{
    return "Staff";
}