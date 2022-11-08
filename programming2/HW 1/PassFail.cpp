#include <iostream>

using namespace std;

int main() 
{
    int studentGrade;

    // Ask for grade and store it in studentGrade
    cout << "What is your grade: ";
    cin >> studentGrade;

    // Make sure students grade is at least 70
    if(studentGrade >= 70) 
    {
        cout << "Passing\n";
    } 
    else 
    {
        cout << "Failing\n";
    }
    return 1;
}