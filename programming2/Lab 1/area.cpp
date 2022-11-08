//  (Arithmetic) Write a program to calculate how much square feet of surface area you need in order to paint the walls of a room that is X feet in length, Y feet in width, and Z feet in height. Write a program that does the following:
//     a. Ask the user the dimensions of the room in feet in all three dimensions (X, Y, Z).
//     b. Calculate the surface area of the of the four walls of the room (excluding the floor and the ceiling; you don’t intend to paint those.)
//     c. Return the surface area to the user in Feet cubed.
//     d. Run for the following test cases:
//         i. X=10, Y=11, Z=12
//         ii. X=9, Y=9, Z=8

#include <iostream>
#include <cmath>

double surfaceArea(double num1, double num2, double num3)
{
    double area;

    area = num1 * num2 * num3;

    return area;
}

int main() 
{
    double X, Y, Z, A;

    std::cout << "What are the dimensions of the room in feet (X, Y, Z)?\n";
    std::cout << "X: ";
    std::cin >> X;
    std::cout << "Y: ";
    std::cin >> Y;
    std::cout << "Z: ";
    std::cin >> Z;

    A = surfaceArea(X, Y, Z);

    std::cout << "\nThe surface area for the room is " << A << "ft^3\n";
    

}