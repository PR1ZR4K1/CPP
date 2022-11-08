/*
*
*   Name: Jaylon Ignacio
*   Date: Monday, 17 October
*
*/
 
#ifndef NUMBER_H  
#define NUMBER_H 
class Number 
{ 
    public: 
        Number(); //default constructor that accepts no parameters 
        Number(int n); // overload constructor 
        void setValue(int n); // a mutator function that changes the value of the private data  
        int getValue(); // an accessor function that returns the value of private data “num” 
        bool isPrime(); // returns true if num is prime 
        bool isLucky(); //returns true if num is divisible by 7 
 
    private:  
        int num; //private data that will represent a number 
}; 
 
 
#endif