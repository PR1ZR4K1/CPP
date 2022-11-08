/*
*
*   Name: Jaylon Ignacio
*   Date: Monday, 17 October
*
*/

#include <string>
#include <iostream>
#include "Car.h"

using namespace std;

// Default Constructor

Car::Car():make(""), model(""), year(0), MPG(0){}

// Param Constructor

Car::Car(string m, string mo, int y, double g):
        make(m), model(mo), year(y), MPG(g){

}

// Print car objects' elements
void Car::print() const{
        cout << "Make: " << make << "\nModel: " << model << "\nYear: " << year << "\nMPG: " << MPG << endl;
}

bool Car::betterMPG(Car b){
    bool better = false;
    if (MPG > b.MPG)
    {
        better = true;
    }
    return better;
}