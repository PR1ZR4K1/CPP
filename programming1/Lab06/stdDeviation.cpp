/*
*   Name: Jaylon Ignacio   
*   File Name: stdDeviation.cpp
*   Description: Utilizing arrays to generate data from test scores
*   Date: 17 October 2022
*/ 
#include <iostream>
#include <cmath>
using namespace std;

// prints out all elements in array
void printArray(const double a[], int size)
{
    int count = 1;
    // iterates through each value and prints out this
    for (int i = 0; i < size; i++)
    {
        cout << "Test Score #" << count << ": " << a[i] << endl;
        count++;
    }
}

// calculates the average by iterating through the array in a for loop
double average(const double a[], int size)
{
    double sum, average;

    for (int i = 0; i < size; i++)
    {
        sum += a[i];
    }

    average = sum/size;
    return average;
}   

// Calculates the standardDeviation of the inputted values 
double standardDeviation(const double a[], int size, double avg)
{
    double stdDev; 
    double sum = 0;

// iterates through array and calculates the ∑
    for (int i = 0; i < size; i++)
    {
        // summation of each val in array - the avg squared 
        sum += pow((a[i] - avg), 2);
    }
    // deviation would be the sqrt of the sum/size
    stdDev = sqrt(sum / size);
    stdDev = floor(stdDev*100+0.5)/100;
    return stdDev;
}



int main()
{
    int count = 0, size = 10;
    double score, testScores[size]{0};
    while (score != -1)
    {
        cout << "Please enter test scores (1-100) -1 to quit: " << endl;
        cin >> score;
        if (score > 0 && score < 100)
        {
            testScores[count] = score;
        }
        else if (score == -1)
        {
            break;
        }
        count++;
    }

    printArray(testScores, size);
    cout << "Number of Scores: " << count << endl;
    cout << "Average: " << average(testScores, size) << endl;
    cout << "Std. Deviation: " << standardDeviation(testScores, size, average(testScores, size)) << endl;

}