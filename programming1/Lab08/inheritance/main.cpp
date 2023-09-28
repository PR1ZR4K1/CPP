/**
 * 
 * Jaylon Ignacio
 * Main file for inheritance
 * 
*/

// including all of the class definition files
#include "Person.h"
#include "Employee.h"
#include "Student.h"
#include "Faculty.h"
#include "Staff.h"

// including necessary libraries
#include <iostream>
#include <string>

int main()
{
    // instantiating each of my defined objects
    Person person1("Bob", "1234 street", 9091231234, "bob@gmail.com");
    Student student1("John", "4321 notStreet", 9097654321, "john@gmail.com", "Freshman");
    Employee employee1("Paul", "elmoStreet", 909767788, "paul@gmail.com", 120000, "10-13-1989");
    Faculty faculty1("Charles", "763 blahStreet", 9098988543, "charles@gmail.com", 32000, "12-31-2002", "associate", "tenured");
    Staff staff1("Nestler", "0 Day Street", 9093239876, "nestler@gmail.com", 160000, "10-24-1969", "Janitor");
    
    // printing values of person object
    std::cout << "Person object's name: " << person1.getName() << "\n";
    std::cout << "\tAddress: " << person1.getAddress() << "\n";
    std::cout << "\tNumber: " << person1.getNumber() << "\n";
    std::cout << "\tEmail: " << person1.getEmail() << "\n\n";

    // printing values of student object
    std::cout << "Student object's name: " << student1.getName() << "\n";
    std::cout << "\tAddress: " << student1.getAddress() << "\n";
    std::cout << "\tNumber: " << student1.getNumber() << "\n";
    std::cout << "\tEmail: " << student1.getEmail() << "\n";
    std::cout << "\tStatus: " << student1.getStatus() << "\n\n";

    // printing values of employee object
    std::cout << "Employee object's name: " << employee1.getName() << "\n";
    std::cout << "\tAddress: " << employee1.getAddress() << "\n";
    std::cout << "\tNumber: " << employee1.getNumber() << "\n";
    std::cout << "\tEmail: " << employee1.getEmail() << "\n";
    std::cout << "\tSalary: " << employee1.getSalary() << "\n";
    std::cout << "\tDate hired: " << employee1.getDateHired() << "\n\n";
    
    // printing values of faculty object
    std::cout << "Faculty object's name: " << faculty1.getName() << "\n";
    std::cout << "\tAddress: " << faculty1.getAddress() << "\n";
    std::cout << "\tNumber: " << faculty1.getNumber() << "\n";
    std::cout << "\tEmail: " << faculty1.getEmail() << "\n";
    std::cout << "\tSalary: " << faculty1.getSalary() << "\n";
    std::cout << "\tDate hired: " << faculty1.getDateHired() << "\n";
    std::cout << "\tRank: " << faculty1.getRank() << "\n";
    std::cout << "\tStatus: " << faculty1.getStatus() << "\n\n";
    
    // printing values of staff object
    std::cout << "Staff object's name: " << staff1.getName() << "\n";
    std::cout << "\tAddress: " << staff1.getAddress() << "\n";
    std::cout << "\tNumber: " << staff1.getNumber() << "\n";
    std::cout << "\tEmail: " << staff1.getEmail() << "\n";
    std::cout << "\tSalary: " << staff1.getSalary() << "\n";
    std::cout << "\tDate hired: " << staff1.getDateHired() << "\n";
    std::cout << "\tPosition: " << staff1.getPosition() << "\n\n";

    // changing status of student object and printing new status
    student1.setStatus("Junior");
    std::cout << "\n" << student1.getName() <<"'s new status is: " << student1.getStatus() << std::endl;

    // changing salary of staff object and printing new salary
    staff1.setSalary(170000);
    std::cout << "\n" << staff1.getName() << "'s new salary is: " << staff1.getSalary() << "\n\n";
    return 0;
}