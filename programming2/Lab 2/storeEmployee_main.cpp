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
    Employee me("Christian", "Magana", 18, 23000.02);
    Employee coworker1;
    Employee coworker2("Jaylon", "Ignacio", 19, 23001.05);


    me.print();
    coworker1.print();
    coworker2.print();

    std::vector<Employee> employees{me, coworker1, coworker2};
    return 1;
}