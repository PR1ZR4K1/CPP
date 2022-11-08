/*
*
* Jaylon Ignacio
* swap.cpp
* October 17, 2022
*/

#include <iostream>
#include <cmath>

using namespace std;

// need global variables that both functions can access
int x, y;

// Function will check if the x value is greater than the y 
// if true it will swap the values of x and y
void swap2(int first, int second)
{
    if (first > second)
    {
        x = second;
        y = first;
    }

}

int main()
{

    cout << "Enter the value of x: " << endl;
    cin >> x;
    cout << "Enter the value of y: " << endl;
    cin >> y;

    swap2(x,y);

    cout << "x: " << x;
    cout << " y: " << y;

}

