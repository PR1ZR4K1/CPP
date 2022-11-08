/*
*
*   Name: Jaylon Ignacio
*   Date: Monday, 17 October
*
*/


#include <iostream> 
#include <cmath>
#include <string>
#include "Number.h"
using namespace std;

// default constructor
Number::Number():num(0){
}
// param contructor or overload constructor
Number::Number(int n):
        num(n){
}

int Number::getValue(){
    return num;
}

bool Number::isLucky(){
    bool isLucky = false;
    if (num % 7 == 0)
    {
        isLucky = true;
    }
    return isLucky;
}

bool Number::isPrime()
{
    bool isPrime = true;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
        }
    }
    return isPrime;
}

void Number::setValue(int n)
{
    num = n;
}


