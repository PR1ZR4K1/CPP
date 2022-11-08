/*
*
*   Name: Jaylon Ignacio
*   Date: Monday, 17 October
*
*/

#ifndef ACCOUNT_H 
#define ACCOUNT_H 

class Account 
{ 
    
private: 
    long accNumber; 
    double balance; 
    static int base; 
 
public: 
    Account(double b);//only constructor 
    ~Account();//destructor 
    void deposit(double amount); //deposits amount to account  
    bool withdraw(double amount);//withdraws amount from account 
    void print()const; // prints account balance 
 
 
}; 

#endif