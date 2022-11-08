// Employee Class

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
        


 
 
}; 

#endif