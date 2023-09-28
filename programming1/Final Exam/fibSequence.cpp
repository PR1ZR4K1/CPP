/**
 * 
 * Jaylon
 * Final Exam 
 * Fibonacci Sequence 
*/


#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>

int fib(int n)
{
    // this num is what I will return once past n = 0 or 1
    int nth = 0;
    // The first two vals of fibonacci sequence are always 0 and 1
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        // by having the function call itself you can generate the sum of the previous 2 
        // n values which gives you the next n value
        nth = fib(n - 1) + fib(n - 2);
        // return fib number
        return nth;
    }
} 

int main()
{
    // initializing vars
    std::vector<int> fibo{};
    int range;
    // intanstiating object and opening file
    std::ofstream writeTo;
    writeTo.open("fib.txt");

    // getting user input
    std::cout << "Enter a value between 3 and 10: ";
    std::cin >> range;
    // ensuring my cpu doesn't explode by limiting the range the user can input
    if (range < 3 || range > 10)
    {
        // error message to explain what happened
        std::cout << "ERROR - Value entered was not within the range!";
        return -1;
    }

    // fibonacci numbers gathered, put into vector, and printed 
    std::cout << "The first " << range << " fibonacci numbers are: ";
    for (int i = 0; i <= range; i++)
    {
        // put fib number into vector 
        fibo.push_back(fib(i));
    }
    
    // print vector elements and write to a file
    for (int i: fibo)
    {
        std::cout << i << " ";
        writeTo << i << " ";
    }
    // close the file
    writeTo.close();
}