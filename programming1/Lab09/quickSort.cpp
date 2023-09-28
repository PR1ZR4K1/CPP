/**
 * 
 * Jaylon
 * My QuickSort Implementation
 * 
*/

#include <iostream>
#include <fstream>

// accepts two ints to be swapped
void swapNums(int& x, int& y)
{
    int c;

// simply flipping values with a place holder var.
    c = x;
    x = y;
    y = c;
}

int partition (int arr[], int start, int end)
{
    // starts i at -1 to properly place new lowest value at the 
    // first position of array after meeting the condition and incrementing
    int i = start - 1;
    // iterate through length of start-end
    for (int j = start; j < end; j++)
    {
        // if cup in sequential order is smaller than last num of array
        if (arr[j] < arr[end])
        {
            // making sure new smallest value is placed at beginning of array
            // on first iteration
            i++;
            // placing acquired small num at front of array
            swapNums(arr[i], arr[j]);
        }
    }
    i++;
    // swaps pivot point with the index after the final number that was evaluated to be greater than the pivot point. 
    swapNums(arr[i], arr[end]);
    // returns index where array was split
    return (i);
}

void quickSort(int arr[], int start, int end)
{
    // as long as bounds make sense
    if (start < end)
    {
        // pivot will be the value equal to the index of the partition
        int pivot = partition(arr, start, end);

        // now go through and sort the other two sides of the partition 
        quickSort(arr, start, pivot - 1);
        quickSort(arr, pivot+1, end);
    }
}

void fillArray(std::fstream & in, int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        // sequentially place each value from file into correct index
        in >> arr[i];
    }
    // close file
    in.close();
}

void writeArray(std::fstream & out, const int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        // place nums into sorted file :)
        out << arr[i] << "\n";
    }
    // close file
    out.close();
}

void print(const int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        // print every value in array
        std::cout << "Cup #" << i << ": " << arr[i] << "\n";
    }
}

int main()
{
    // initializing vars/objects
    std::fstream readFile, writeFile;
    int toSort[20];

    // opening needed files.
    readFile.open("unsorted.txt");
    writeFile.open("sorted.txt");

    // read values from file
    fillArray(readFile, toSort, 20);
    std::cout << "Unsorted numbers...\n"; 
    print(toSort, 20);

    // sort and print results
    quickSort(toSort, 0, 19);
    std::cout << "Sorted numbers...\n";
    print(toSort, 20);

    // write to file
    writeArray(writeFile, toSort, 20);
}