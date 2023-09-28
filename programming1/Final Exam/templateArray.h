/*
 * Jaylon
 * 12/5/2022
 */
#ifndef TEMPLATEARRAY_H
#define TEMPLATEARRAY_H
#include <iostream>
using namespace std;

template<typename T> //arrays will only hold 1 data type
class Array{
	private:
		T* ptr;//dynamic array
		int total;//total # of elements
		int capacity;//capacity of array
	public:
		Array(int n);//Array of size n
		~Array();//destructor
		void add(T n);//add an element to the array
		void print();//prints all elements in the array
		int size(); //returns the size of the array
		bool empty(); //returns true if the array is empty
};
#endif
