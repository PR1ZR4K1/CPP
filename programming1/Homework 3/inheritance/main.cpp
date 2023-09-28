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
#include <vector>

int main()
{
    std::vector <Person*> people(5);
    // instantiating each of my defined objects within a vector full of pointers
    people[0] = new Person("Bob", "1234 street", 9091231234, "bob@gmail.com");
    people[1] = new Student("John", "4321 notStreet", 9097654321, "john@gmail.com", "Freshman");
    people[2] = new Employee("Paul", "elmoStreet", 909767788, "paul@gmail.com", 120000, "10-13-1989");
    people[3] = new Faculty("Charles", "763 blahStreet", 9098988543, "charles@gmail.com", 32000, "12-31-2002", "associate", "tenured");
    people[4] = new Staff ("Nestler", "0 Day Street", 9093239876, "nestler@gmail.com", 160000, "10-24-1969", "Janitor");

    // display info from all pointers.
    for (int i = 0; i < people.size(); i++)
    {
        std::cout << people[i]->getName() << " is an " << people[i]->whatami() << "\n";
    }
    for (int i = 0; i < people.size(); i++)
    {
        delete people[i];
    }

    
    return 0;
}