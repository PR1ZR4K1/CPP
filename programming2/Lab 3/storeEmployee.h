// Employee Class

//     2. (Operator Overloading for Classes) Write a C++ program for this question. Submit with .cpp file and screenshots of running program. You are going to need the storeEmployee class that you created in Lab2.
        // a. (Relational Operators) Let’s say that for our hypothetical clothes-store program, we want to use the comparison operator ‘==’ to detect accidental duplicates in our employees.
        //     i. Overload the comparison operator ‘==‘ so that it may be used on class storeEmployee.
        // b. (Arithmetic Binary Operators) Now let’s say that we want to have a convenient way to increase the employee’s salary whenever they get a raise. We could simply use the setSalary function, but you want a quicker method to increase salary.
        //     i. Overload the add-and-assignment operator ‘+=’ for the storeEmployee class. The first operand is a storeEmployee and the second operand is a double. The result is that the double is added to the storeEmployees salary.
        // c. (Arithmetic Unary Operators) Now let’s say that we want to have a convenient way to increment the employee’s age each year that they work. We could simply use the setAge function, but you want a quicker method to increment age.
        //     i. Overload the pre-increment operator ‘++‘ for storeEmployee. The result is that age incremented.
        // d. Test that it works with the following int main() and add comments to it.
        //     i. Enter 2000 for the raiseAmount.

#ifndef Employee_H 
#define Employee_H 
#include <string>

class Employee 
{ 
    
private: 
        std::string firstName;
        std::string lastName;
        int age;
        double salary;
 
public: 
        Employee();
        Employee(std::string fN, std::string lN, int a, double s); 
        ~Employee();//destructor

        // Getters for 4 data members 
        std::string getfName();  
        std::string getlName();  
        int getAge();  
        double getSalary();  

        // Setters for 4 data members
        void setfName(std::string name);
        void setlName(std::string name);
        void setAge(int num);
        void setSalary(int num);
        void print();
        
        // operator overloading
        bool operator==(const Employee emp1);
        void operator+=(double num);
        void operator++();
        
 
 
}; 

#endif