/**
 * 
 * Jaylon Ignacio
 * Employee class that inherits Person class 
 * 
*/

#include <string>
#include "Person.h"
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee: public Person
{

    private:
            int salary;
            std::string dateHired;

    public:
            // default, overload, destructor constructors.
            Employee();
            Employee(std::string n, std::string a, long num, std::string e, int s, std::string dH);
            ~Employee();

            // getter functions for private data members
            int getSalary();
            std::string getDateHired();
            
            // setter functions for private data members
            void setSalary(int newSalary);
            void setDateHired(std::string newDate);
            virtual std::string whatami();         
            


};

#endif