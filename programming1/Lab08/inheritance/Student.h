/**
 * 
 * Jaylon Ignacio
 * Student class that inherits Person class 
 * 
*/

#include <string>
#include "Person.h"
#ifndef STUDENT_H
#define STUDENT_H

class Student: public Person
{

    private:
            std::string status;

    public:
            // default, overload, destructor constructors.
            Student();
            Student(std::string n, std::string a, long num, std::string e, std::string s);
            ~Student();

            // getter functions for private data members
            std::string getStatus();

            // setter functions for private data members
            void setStatus(std::string newStatus);
            virtual std::string whatami();
        

};

#endif