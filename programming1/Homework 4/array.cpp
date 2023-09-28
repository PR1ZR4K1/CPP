/**
 * 
 * Jaylon
 * 12/5/2022
 * fill arrays and gather sum of array
 * 
*/


#include <iostream>
#include <fstream>

void fillArray(std::istream & in, int arr[], int size)
{
    for (int i = 0; !in.eof(); i++)
    {
        in >> arr[i];
    }

}

int sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int size = 10;
    std::ifstream inputFile;
    int nums[size];

    inputFile.open("ex5.txt");
    fillArray(inputFile, nums, size);
    
    std::cout << "The sum of nums is: " << sum(nums, size) << "\n";
}