#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;

int main()
{
    string input;
    char next;
    Stack<Vector<char> > stack;
    cout << endl;
    cout << "Enter string of a,b,c: ";
    cin >> input;
    cout << endl;
    int i;

    for (i = 0; i < input.length(); i++)
    {
        next = input[i];
        if (next == 'a' || next == 'b')
        {
            stack.push(next);
        }

        else if (next == 'c')
        {
            if (!stack.empty())
            {
                stack.pop();
            }
            else 
            {
                break;
            }
        }
        
    }
    if (!stack.empty() || i < input.length())
    {
        cout << "Fail" << endl << endl;
    }
    else 
    {
        cout << "Success!!" << endl << endl;
    }
    return 0;
}