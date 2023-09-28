/*
 * Filename: Stack.h
 * Definition of the Stack Class Template
 */
#ifndef TEMPSTACK_H
#define TEMPSTACK_H
#include <iostream>
#include <cassert>
using namespace std;

//T will be the datatype stored in the stack
template <typename T>
class Stack{
	//data members
	private:
		T* ptr;//dynamic array of type T
		int capacity;//max capacity of stack
		int total;//total elements in the stack
	public:
		Stack(int n);//stack capable of holding n # of elements
		~Stack();//destructor
		void push(const T& n);//adds an element
		bool empty();//returns true if the stack is empty
		int size();//returns the current size of the stack
		T top();//returns the element at the top of the stack
		void pop();//deletes the top element
};
#endif



