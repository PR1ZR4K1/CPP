#include "Vector.h"

void printVector(const Vector<int>&);


int main()
{
    Vector<int> myVec;
    for (int i = 1; i <= 10; i++)
    {
        myVec.push_back(i);
    }
    cout << "\nHere is vector myvex:\n";
    printVector(myVec);

    Vector<int> anotherVec(myVec);
    for (int i = 0; i < anotherVec.size(); i++)
    {
        anotherVec[i] += 5;
    }
    cout << "\n Here is another vector (copy of myVec, add 5 to all)\n";
    printVector(anotherVec);

    Vector<int> yetAnother = anotherVec;
    for (int i = 0; i < yetAnother.size(); i++)
    {
        yetAnother[i] *= 2;
    }
    cout << "\nHere is yet another vector (previous vector but all elements x2)\n";
    printVector(yetAnother);

    cout << "\nThe original vector myVec:";
    printVector(myVec);

    cout << endl << endl;
    
    return 0;
}

void printVector(const Vector<int>& v)
{
    cout << "\n";
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}
