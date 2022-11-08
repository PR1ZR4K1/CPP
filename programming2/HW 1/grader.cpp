#include <iostream>

using namespace std;

int main() 
{
    int studentGrade;

    // Ask for grade and store it in studentGrade
    cout << "What is your grade: ";
    cin >> studentGrade;

    // Print corresponding grade
    if(studentGrade >= 90) 
    {
        cout << "A\n";
    } 
    else if(studentGrade >= 80) 
    {
        cout << "B\n";
    }
    else if(studentGrade >= 70) 
    {
        cout << "C\n";
    }
    else if(studentGrade >= 60) 
    {
        cout << "D\n";
    } 
    else
    {
        cout << "F\n";
    }

    return 1;
}