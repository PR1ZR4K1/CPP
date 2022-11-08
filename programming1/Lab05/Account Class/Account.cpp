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

// Overload Constructor
Account::Account(double b):
        balance(b){
}

// Destructor
Account::~Account(){

}

//deposits amount to account
void Account::deposit(double amount){
    balance += amount;
    cout << "Deposited: $" << amount << " into your account" << endl;
} 
//withdraws amount from account
bool Account::withdraw(double amount){
    bool success = false; 
    if (amount < balance)
    {
        balance -= amount;
        success = true;
    }
    else
    {
        balance -= 5;
    }
    return success;
}

// prints account balance
void Account::print()const
{
    cout << "Balance: $" << balance << endl;
} 