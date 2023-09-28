// Write an implementation of the following functions: 
// void print_vector(const vector<int> & v); 
// This procedure prints all the elements of vector v. The vector parameter is passed as a 
// constant because no modifications will not be made to the vector inside of the procedure. 
// The vector parameter is passed by reference to avoid making a whole new copy of the 
// vector. 
// void appendVector(vector<int>& v, const vector<int> & w); 
// Both arguments of this procedure are vectors of integers. The function should modify 
// vector v by appending to it all the elements of vector w. For example, if v=(4,2,5) and 
// w=(11,3), then v will result in (4,2,5,11,3). Hint: the vector class has a function called 
// push_back() that appends values passed into it.  
// Then write a main program that does the following: 
// • Declares two vectors with different values in them 
// • Prints the values of both vectors 
// • Calls appendVector() and adds the values of one vector to the end of another 
// • Prints the values of both vectors to show that appendVector() works. 

/**
 * 
 * Jaylon Ignacio
 * 11 November 2022
 * appendVectors.cpp
 * 
 * **/
#include <iostream>
#include <vector>
#include <cmath>

// For each loop that iterates through all elements in vector and couts them
void printVector(const std::vector<int> & v )
{
    int count = 0;
    for (int i:v)
    {
        std::cout << "Index #" << count << ": " << i << std::endl;
        count++;
    }
}

void appendVector(std::vector<int> & v, const std::vector<int> & w)
{
    for (int i: w)
    {
        v.push_back(i);
        std::cout << "Added: " << i << " to vector one!" << std::endl;
    }
}

int main()
{

    std::vector<int> one{1, 5, 98, 3};
    std::vector<int> two{23, 54, 22};

    std::cout << "\nVector number one values: " << std::endl;
    printVector(one);
    std::cout << "\nVector number two values: " << std::endl;
    printVector(two);

    std::cout << "\nAdding vector two to vector one..." << std::endl;

    appendVector(one, two);

    std::cout << "\nVector number one values: " << std::endl;
    printVector(one);
    std::cout << "\nVector number two values: " << std::endl;
    printVector(two);




}