/*
*
*   Name: Jaylon Ignacio
*   Date: Monday, 17 October
*
*/

#include <iostream> 
#include <cmath>
#include <string>
#include "Account.h"
using namespace std;

int main()
{
    // Instantiating objects
    Account Checkings(1500);
    Account Savings(1000);

    Checkings.print();
    Savings.print();

    Checkings.deposit(100.50);

    if (Savings.withdraw(500))
    {
        cout << "Withdrawal completed successfully." << endl;
    }
    else
    {
        cout << "ERROR - Insufficient funds $5 penalty has been applied." << endl;
    }

    Checkings.print();
    Savings.print();
}