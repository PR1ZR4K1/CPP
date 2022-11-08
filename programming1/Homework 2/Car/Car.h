/*
*
*   Name: Jaylon Ignacio
*   Date: Monday, 17 October
*
*/
 
#ifndef CAR_H  
#define CAR_H 
#include <string>
#include <iostream>

using namespace std;


class Car
{
    private:
            string make;
            string model;
            int year;

    public:
            Car(); // default constructor
            Car(string m, string mo, int y, double g); //overload constructor
            void print() const; // prints out values inside car object
            bool betterMPG(Car b); // returns true if invoking car object has a better mpg 

    protected:
            double MPG;

};

#endif
