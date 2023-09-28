/**
 * 
 * Jaylon Ignacio
 * Faculty class that inherits Employee class 
 * 
*/

#include <string>
#include "Employee.h"
#ifndef FACULTY_H
#define FACULTY_H

class Faculty: public Employee
{

    private:
            std::string rank;
            std::string status;

    public:
            // default, overload, destructor constructors.
            Faculty();
            Faculty(std::string n, std::string a, long num, std::string e, int s, std::string dH, std::string r, std::string st);
            ~Faculty();

            // getter functions for private data members
            std::string getRank();
            std::string getStatus();
            
            // setter functions for private data members
            void setRank(std::string newRank);
            void setStatus(std::string newStatus);
            virtual std::string whatami();
                     


};

#endif