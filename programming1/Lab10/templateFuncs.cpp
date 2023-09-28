/**
 * 
 * 
 * Jaylon
 * Moday December 5 2022
 * program that finds smallest value using templates
 * 
*/

#include <iostream>
#include <string>


template <typename thing>
void findSmaller(thing const a, int size)
{
    // initialize var
    int smallest = 0;

    // nested for loop to compare each value within the array against
    // every other value present within the array 
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        // if position is less than or equal to other nums in array and less 
        // than current lowest index then we can reset smallest to its new value 
            if (a[i] <= a[j] && a[i] <= a[smallest])
            {
                smallest = i;
            }
            // have to ensure if the first condition fails, because a[j] houses an
            // even smaller number, that the second only evals to true if
            // a[j] is also smaller than current smallest value
            else if (a[j] <= a[smallest])
            {
                smallest = j;
            }
    }
    // cout the smallest value :)
    std::cout << "Smallest Value for Array: " << a[smallest] << "\n";
}

int main()
{
    // initialize length of array and 3 different types of arrays
    int size = 5;
    int intArray[size] = {7,12,4,5,6};
    double doubleArray[size] = {10.5, 1.7, 10.89, 52.3, 98.2};
    char charArray[size] = {'i', 'b', 'c', 'a', 'e'};

    // call each of the functions
    findSmaller(intArray, size);
    findSmaller(doubleArray, size);
    findSmaller(charArray, size);

}