#include <string>
#include <iostream>
#include <cmath>
using namespace std;

void func1(int & x, int & y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int* blah = nullptr;
    int number = 20;
    blah = &number;
    std::cout << *blah;
}