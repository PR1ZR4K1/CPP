/*
*   Name: Jaylon Ignacio   
*   File Name: stdDeviation.cpp
*   Description: Utilizing arrays to generate data from test scores
*   Date: 17 October 2022
*/ 
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

// prints out elements within the vector
void printVector(const vector<int> & v)
{
    int count = 1;
    for(int i:v)
    {
        cout << "Element #" << count << ": " << i << endl;
        count++;
    }
}

// searches linearly through the vector
int linearSearch(const vector<int> & v, int value)
{
    // initialize important vars

    int checks = 0; 
    int index = -1;

    // iterate through vector searching for value 
    for (int i = 0; i < v.size(); i++)
    {
        checks++;
        if (v[i] == value)
        {
            index = i;
            break;
        }

        // after each check we add 1 to checks to keep track of the amount of attemptss
    }

    // index will not be -1 if value is inside the vector
    if (index != -1)
    {
        cout << "Linear search found value in " << checks << " trys" << endl;
    }
    else
    {
        cout << "Linear search took " << checks << " checks to realize value was not in the vector!" << endl;
    }

    // always need to return index 
    return index;
}

// binary search goes for the middle of the list first then checks if val is higher or lower
// then goes to the left or right guessing the middle number again
int binarySearch(const vector<int> & v, int value)
{
    int checks = 0;
    int bottom = 0;
    int index = -1;
    int middle = v.size()/2;
    int top = v.size();
    for (int i = 0; i < v.size(); i++)
    {
        // adds one to the amount of checks 
        checks++;
        // value is less so we search to the left
        if (value < v[middle])
        {
            // change the boundaries to search between to the left side of the vector
            top = middle;
            middle = (bottom + top) / 2;

        }
        // computer guessed the value correctly
        else if (value == v[middle] )
        {
            index = i;
            break;
        }
        
        // change the boundaries to search between to the left side of the vector
        else if (value > v[middle])
        {
            // use top to maintain the boundaries of the search
            bottom = middle;
            middle = (bottom + top) / 2;
        }
    }
    // computer found value
    if (index != -1)
    {
        cout << "Binary search found value in " << checks << " trys" << endl;
    }
    else
    {
        cout << "Binary search took " << checks << " checks to realize value was not in the vector!" << endl;
    }

    // always need to return index 
    return index;
}

// if the number doesn't exit insertVector adds the user inputted value in the right spot in the vector
void insertVector(vector<int> & v, int value)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (value > v[i]  && value < v[i+1])
        {
            v.insert(v.begin() + i + 1, value);
            break;
        }
    }
}


int main()
{
    vector<int> nums{3, 3, 10, 15, 19, 28, 41, 99, 140};

    bool running = true;
    int input;
    printVector(nums);


    while (running)
    {
        cout << "Input value to search for within vector (-1 to quit): ";
        cin >> input;

        if (input == -1)
        {
            printVector(nums);
            running = false;
        }
        else if (input > 0)
        {
            linearSearch(nums, input);
            if (binarySearch(nums, input) == -1)
            {
                insertVector(nums, input);
                cout << "Added value to vector!\n";
            }

        }
    }
}