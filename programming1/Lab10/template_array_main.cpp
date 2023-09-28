/*
 * Jaylon
 * Program that uses Array template class
 * 12/5/2022
 */
#include "templateArray.cpp"
#include <iostream>

int main()
{
        //declare an Array of type char
        Array<char> charArray(4);
        // fill array with values
        charArray.add('C');
        charArray.add('c');
        charArray.add('A');
        charArray.add('a');

        // create array of type int
        Array<int> intArray(10);
        // fill in array w nums
        for (int i = 0; i < 10; i++)
        {
                intArray.add(i+i+2);
        }       

        // create array of type double
        Array<double> doubleArray(5);
        // fill array
        doubleArray.add(5.2);
        doubleArray.add(8.6);
        doubleArray.add(4.32);
        doubleArray.add(96.3);
        doubleArray.add(67.3);

        // cout all of the values in the arrays
        std::cout << "Char Array values: ";
        charArray.print();         
        std::cout << "Int Array values: ";
        intArray.print();
        std::cout << "Double Array values: ";
        doubleArray.print();
        return 0;
}
