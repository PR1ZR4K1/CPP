/*
 * Filename: Stack_main.cpp
 * Program that uses the Stack class template
 */
#include "tempStack.cpp"

int main()
{
	//define a stack of ints, size 10
	Stack<int> intStack(10);
	// i use this var to add nums to stack increasing it by 5 per element
	int iterate = 0;

	// if stack is empty then cout that it is empty
	if (intStack.empty())
	{
		std::cout << "The stack is empty\n";
	}

	// push three elements onto the stack 5, 10, 15
	for (int i = 0; i < 3; i++)
	{
		iterate += 5;
		intStack.push(iterate);
	}

	// print element at the top of the stack
	std::cout << "Element at the top of stack: " << intStack.top() << "\n";
	// pop every element within the stack
	for (int i = 0; i < 3; i++)
	{
		intStack.pop();
	}
	
	// check if stack is empty or not again
	if (intStack.empty())
	{
		std::cout << "The stack is empty\n";
	}

	return 0;
}
