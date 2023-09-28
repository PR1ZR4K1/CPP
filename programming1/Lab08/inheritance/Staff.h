/**
 * 
 * Jaylon Ignacio
 * Staff class that inherits Employee class 
 * 
*/

#include <string>
#include "Employee.h"
#ifndef STAFF_H
#define STAFF_H

class Staff: public Employee
{

    private:
            std::string position;

    public:
            // default, overload, destructor constructors.
            Staff();
            Staff(std::string n, std::string a, long num, std::string e, int s, std::string dH, std::string pos);
            ~Staff();

            // getter functions for private data members
            std::string getPosition();
            
            // setter functions for private data members
            void setPosition(std::string newPosition);
            virtual std::string whatami();         


};

#endif