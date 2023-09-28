/**
 * 
 * Jaylon Ignacio
 * Person class 
 * 
*/

#include <string>
#ifndef PERSON_H
#define PERSON_H

class Person
{

    private:
            std::string name;
            std::string address;
            long phoneNumber;
            std::string email;

    public:
            // default, overload, destructor constructors.
            Person();
            Person(std::string n, std::string a, long num, std::string e);
            ~Person();

            // getter functions for private data members
            std::string getName();
            std::string getAddress();
            long getNumber();
            std::string getEmail();

            // setter functions for private data members
            void setName(std::string newName);
            void setAddress(std::string newAddress);
            void setNumber(long number);
            void setEmail(std::string newEmail);   
            virtual std::string whatami();         

};

#endif