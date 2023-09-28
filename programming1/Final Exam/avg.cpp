/**
 * 
 * Jaylon
 * Final Exam 
 * Average calculator
*/


#include <iostream>
#include <cmath>
#include <vector>

// calculate the average of values within a vector of doubles
double avg(const std::vector<double> & v)
{
    // initialize vars
    double sum = 0, average = 0;
    // iterate through vector
    for (int i: v)
    {
        // create a sum of the nums
        sum += i;
    }
    // average is sum/total num of elements
    average = sum/v.size();
    // return the average
    return average;
}

int main()
{
    // instantiate vector
    std::vector<double> nums{76, 63, 98, 54, 85, 22, 77, 86};

    std::cout << "Vector Elements: ";
    // print all vector elements
    for (double i: nums)
    {
        std::cout << i << " ";
    }
    // cout the average of the elements
    std::cout << "The average of the vector elements is: " << avg(nums) << std::endl;
}