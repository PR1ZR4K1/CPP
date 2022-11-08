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

int main()
{
    Car carA("Toyota", "Camry", 2011, 23.8);
    Car carB("Infiniti", "G37", 2011, 20);

    carA.print();
    carB.print();

    if (carA.betterMPG(carB))
    {
        cout << "Car A has a better MPG than Car B" << endl;
    }
    else
    {
        cout << "Car B has a better MPG than Car A" << endl;
    }

}