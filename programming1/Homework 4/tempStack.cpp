/*
 * Filename: Stack.cpp
 * Definition of the Stack Class Template member functions
 */
#include "tempStack.h"

//constructor
template<typename T>
Stack<T>::Stack(int n): capacity(n), total(0){
	//new empty stack capable of holding n elements
	ptr = new T[n];//in heap memory
}
//destructor
template<typename T>
Stack<T>::~Stack(){
	delete[] ptr;//deallocate array in heap
}
//push - add element to the top of the stack
template<typename T>
void Stack<T>::push(const T&n){
	//make sure we can add another element
	if(total < capacity){
		ptr[total] = n;
		total++;
	}
	else{
		cout << "Stack at capacity.\n";
	}
}
//empty - returns true if the stack is empty
template<typename T>
bool Stack<T>::empty(){
	//check if it is empty
	if(total == 0)
		return true;
	else
		return false;
}
//size - returns the current # of elements in the stack
template<typename T>
int Stack<T>::size(){
	return total;
}
//top - returns the element at the top of the stack
template<typename T>
T Stack<T>::top(){
	if(empty()){
		cout << "The stack is empty.\n";
		assert(false);//if we have no return, end the program
	}
	else{
		//return top element
		return ptr[total-1];
	}
}
//pop - delete top item
template<typename T>
void Stack<T>::pop(){
	if(total > 0)
		total--;//reduce size by 1
	else
		cout << "No elements to delete.\n";
}


