#include <iostream> 
#include <string>
#include "storeEmployee.h"
#include <vector>

        // b. (Constructor for a class) For the storeEmployee class that you created in part A:
        //     i. Write a default constructor that initializes each member to “”, “”, 0, 0 respectively.
        //     ii. Then declare a new storeEmployee called coworker1 that invokes the new default constructor. Print it using the print function.
        //     iii. Now write an overloaded constructor that accepts a string fn, a string ln, an int a, and a double s and initializes the member variables to each one respectively.
        //     iv. Then declare a new storeEmployee called coworker2 that invokes the new default constructor. Have the members be your best friend’s first name, last name, age (can be fake), and salary (any number you want). Print it using the print function.
        // c. (Storing into a vector) For the employees that you created in parts a and b:
        //     i. Create a vector called employees.
        //     ii. Push me, coworker1, and coworker2 onto employees.

int main()
{
    //for employee 1, change to your first name and your last name
	Employee employee1("Christian", "Magana", 25, 50000.00);
	Employee employee2("Bob", "Jones", 26, 55000.00);
	Employee employee3("Bob", "Jones", 26, 55000.00);
	Employee employee4("John", "Doe", 27, 60000.00);

    // check if employees are equal
	if (employee2 == employee3)
	{
		std::cout << "Employee 2 and Employee 3 are duplicates. Consider erasing one." << std::endl << std::endl;
	}
	else
	{
		std::cout << "Employee 2 and Employee 3 are NOT duplicates." << std::endl << std::endl;
	}

	double raiseAmount;
	std::cout << "The employee " << employee1.getfName() << " " << employee1.getlName() <<
		" has a current salary of $" << employee1.getSalary() << ". He deserves a raise!" <<
		std::endl << "Please enter the raise to give him: ";
	std::cin >> raiseAmount;
	employee1 += raiseAmount;
	std::cout << "Employee 1's new salary is: $" << employee1.getSalary() << std::endl << std::endl;

	std::cout << "The employee " << employee4.getfName() << " " << employee4.getlName() <<
		" was " << employee4.getAge() << " years old, but today is his birthday!" << std::endl;
	++employee4;
}