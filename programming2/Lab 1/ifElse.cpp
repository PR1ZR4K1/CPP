//  (Control Statements) Write a program where the user enters the three sides of a triangle and the program tells you if the triangle:
//     a. Is ‘NOT a triangle’ (One side is longer that the two other sides combined.)
//     b. Is a ‘Scalene Triangle’ (All three sides are different.)
//     c. Is an ‘Isoceles Triangle’ (Two sides are equal, but not all three.)
//     d. Is an ‘Equilateral Triangle’ (All three sides are equal.)
//     e. Run for the following test cases:
//         i. SideA=5, sideB=5, sideC=5
//         ii. SideA=6, sideB=6, sideC=4
//         iii. SideA=3, sideB=4, sideC=5
//         iv. SideA=10, sideB=4, sideC=4

#include <iostream>

int main()
{
    int sideA, sideB, sideC;

    std::cout << "Side A: ";
    std::cin >> sideA;
    std::cout << "\nSide B: ";
    std::cin >> sideB;
    std::cout << "\nSide C: ";
    std::cin >> sideC;

    if ((sideA > sideB + sideC) || (sideB > sideA + sideC) || (sideC > sideB + sideA))
    {
        std::cout << "\nNOT a triangle\n";
    }
    else if (sideA != sideB && sideA != sideC && sideB != sideC)
    {
        std::cout << "\nScalene Triangle\n";
    }
    else if ((sideA == sideB  && sideA != sideC) || (sideA == sideC && sideA != sideB) || (sideC == sideB && sideC != sideA))
    {
        std::cout << "\nIsoceles Triangle\n";
    }
    else if (sideA == sideB and sideC == sideB and sideC == sideA)
    {
        std::cout << "\nEquilateral Triangle\n";
    }

    
}