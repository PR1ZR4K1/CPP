/*
 * Jaylon
 * Definition of the Array class template functions
 * 12/5/2022
 */
#include "templateArray.h"
 //constructor
template<typename T>
Array<T>::Array(int n): total(0), capacity(n){
	ptr = new T[n];
}
//destructor
template<typename T>
Array<T>::~Array(){
	delete[] ptr;
}
//add - add an element to the array
template<typename T>
void Array<T>::add(T n){
	 //make sure we can
	if(total < capacity){
		ptr[total] = n;
		total++;
	}
	else
		cout << "Array at capacity.\n";
}
//print - prints every array element
template<typename T>
void Array<T>::print(){
	//print all elements
	for(int i = 0; i < total; i++)
		cout << ptr[i] << " ";
	cout << "\n";
}
// returns the size of the array
template<typename T>
int Array<T>::size(){
	return total;
}
// returns true if array is empty
template<typename T>
bool Array<T>::empty(){
	if (total == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

