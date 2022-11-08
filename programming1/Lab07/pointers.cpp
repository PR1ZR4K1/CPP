// Jaylon Ignacio

// Program with arrays using pointers
// 

#include <iostream>
#include <string>

// cycle through for loop and add values for each cup within the array
// pointer points to the spot in memory where the first cup of the array is located
// by adding 'i' i am essentially moving to the next cup in the array and changing the value held within
void fillArray(int* a, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << "Value for cup " << i << " : ";
        std::cin >> *(a+i); 
    }
}

// iterates through each cup/memory address for the array and prints the value stored
void print(const int* a, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << "Value in cup " << i << " : " << *(a+i) << "\n";
    }
}

// iterates through each cup/memory address and checks if any of the values are greater than max
// returns the max value
int max(const int* a, int size)
{
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        if ((*(a+i) > max))
        {
            max = *(a+i);
        }
    }
    return max;
}


int main()
{
    int size;
    // initializing our pointer
    int* pArray = NULL;

    std::cout << "Size of array: ";
    std::cin >> size;
    // array must be greater than 0
    if (size <= 0)
    {
        std::cout << "ERROR - Size must be greater than 0!";
        return 1;
    }

    // now we have our array and the pointer points to it
    pArray = new int[size];

    // use written functions 
    fillArray(pArray, size);
    std::cout << "\n";
    print(pArray, size);
    std::cout << "\nThe largest value within the array is: " << max(pArray, size);

    // delete array from heap memory :)
    delete[] pArray;
    return 0;
}