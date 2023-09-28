/**
 * 
 * Jaylon 
 * Class and Member Function Definitions for Faculty that inherits Employee class
 * 
*/

#include "Faculty.h"
#include <string>
#include <iostream>

// Constructors

// Default
Faculty::Faculty():rank(""), status("") {}

// Overload
Faculty::Faculty(std::string n, std::string a, long num, std::string e, int s, std::string dH, std::string r, std::string st):
        Employee(n, a, num, e, s, dH), rank(r), status(st) {}

// Destructor
Faculty::~Faculty()
{
    std::cout << "Destroying Faculty object with name: " << getName() << std::endl;
}

// Getter functions
                        
std::string Faculty::getRank()
{
    return rank;
}

std::string Faculty::getStatus()
{
    return status;
}

// Setter Functions

void Faculty::setRank(std::string newRank)
{
    rank = newRank;
}

void Faculty::setStatus(std::string newStatus)
{
    status = newStatus;
}

// virtual function 

std::string Faculty::whatami()
{
    return "Faculty";
}