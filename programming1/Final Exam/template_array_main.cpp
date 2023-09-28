/*
 * Jaylon
 * Program that uses Array template class
 * 12/5/2022
 */
#include "templateArray.cpp"
#include <iostream>

int main()
{
        //declare an Array abject of type char
        Array<int> intArray(5);
        // check if array is empty and print appropriate response
        if (intArray.empty())
        {
                std::cout << "The array is empty :0" << std::endl;
        }
        else
        {
                std::cout << "The array is not empty :)"<< std::endl;
        }
        // add 3 nums to array
        for (int i = 0; i < 3; i++)
        {
                intArray.add(i);
        }
        // print size of array
        std::cout << "The size of the array is: " << intArray.size()<< std::endl;
        // add two nums to array
        intArray.add(96);
        intArray.add(23);
        // print vals within array
        intArray.print();
}
