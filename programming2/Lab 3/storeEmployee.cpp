        // a. (Writing a class) Write a C++ program for this question. You can have this be the same program as question 1. Create a .h file called storeEmployee.h to contain the storeEmployee class. Submit with .cpp file, .h file and screenshots of running program.
        //     i. Write a class called storeEmployee that contains the private members:
        //         1. A string called firstName
        //         2. A string called lastName
        //         3. An int called age
        //         4. A double called salary
        //     ii. Write accessor and mutator functions for all four private members.
        //     iii. Write another function called print() that couts all four variables.
        //     iv. In your Int Main(), test that your class works by:
        //         1. Including your storeEmployee.h file
        //         2. Declaring an object of type storeEmployee called me. Use your first name, last name, age (can be fake), and salary (any number you want) as the members using the mutator functions that you wrote.
        //         3. Use the print function to show contents.

        // b. (Constructor for a class) For the storeEmployee class that you created in part A:
        //     i. Write a default constructor that initializes each member to “”, “”, 0, 0 respectively.
        //     ii. Then declare a new storeEmployee called coworker1 that invokes the new default constructor. Print it using the print function.
        //     iii. Now write an overloaded constructor that accepts a string fn, a string ln, an int a, and a double s and initializes the member variables to each one respectively.
        //     iv. Then declare a new storeEmployee called coworker2 that invokes the new default constructor. Have the members be your best friend’s first name, last name, age (can be fake), and salary (any number you want). Print it using the print function.
        // c. (Storing into a vector) For the employees that you created in parts a and b:
        //     i. Create a vector called employees.
        //     ii. Push me, coworker1, and coworker2 onto employees.

#include <iostream>
#include <string>
#include "storeEmployee.h"

// Default Constructor
Employee::Employee():
        firstName(""), lastName(""), age(0), salary(0){}

// Overload Constructor
Employee::Employee(std::string fN, std::string lN, int a, double s):
        firstName(fN), lastName(lN), age(a), salary(s){}

// Destructor
Employee::~Employee(){

}

// Getter Functions
std::string Employee::getfName(){
        return firstName;
}

std::string Employee::getlName(){
        return lastName;
}

int Employee::getAge(){
        return age;
}

double Employee::getSalary(){
        return salary;
}

// Setter Functions
void Employee::setfName(std::string name){
        firstName = name;

}

void Employee::setlName(std::string name){
        lastName = name;
}

void Employee::setAge(int num){
        age = num;
}

void Employee::setSalary(int num){
        salary = num;
}

void Employee::print(){

        std::cout << "\nFirst Name: " << firstName << "\nLast Name: " << lastName << "\nAge: " << age << "\nSalary: " << salary << std::endl;

}

// checking if two objects have equal values
bool Employee::operator==(const Employee emp1){

        if (firstName == emp1.firstName && lastName == emp1.lastName && age == emp1.age && salary == emp1.salary)
        {
                return true;
        }
        else
                return false;
}

// adding to employees salary
void Employee::operator+=(double num){

        salary += num;
}

// adding 1 to employees age
void Employee::operator++(){

        age++;
}