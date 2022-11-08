
/*
* Jaylon Ignacio
* Number_main.cpp
* Main program to test Number class
*/

#include <iostream>
#include "Number.h"

using namespace std;

int main()
{

    Number seven(7);
    if(seven.isPrime())
     cout << seven.getValue() << " is prime" << endl;
    else
     cout << seven.getValue() << " is not prime" << endl;
    if(seven.isLucky())
     cout << seven.getValue() << " is a lucky number" << endl;
    else
     cout << seven.getValue() << " is not a lucky number" << endl;
    Number twentySeven;
    twentySeven.setValue(27);
    cout << twentySeven.getValue() << " is";
    if(twentySeven.isPrime())
     cout << " prime." ;
    else
     cout << " is not prime.";
    if(twentySeven.isLucky())
     cout << " And it is lucky." << endl;
    else
     cout << " And it is not lucky." << endl;
    return 0;
}
