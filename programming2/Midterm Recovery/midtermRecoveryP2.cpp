#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;

void remove_odds(Vector<int>& vec)
{
    Vector<int>::iterator itr = vec.begin();
    while (itr != vec.end())
    {
        if (*itr % 2 == 1)
        {
            vec.erase(itr);
        }
        ++itr;        
    }
    return;
}


int main()
{

    Vector<int> myvec;
    for (int i = 0; i <= 6; i++)
    {
        myvec.push_back(i);
    }

    cout << "Vector before odds are removed:\n";

    for ( int x: myvec)
    {
        cout << x;
    } 
    remove_odds(myvec);

    cout << "\nVector after odds are removed:\n";

    for ( int x: myvec)
    {
        cout << x;
    } 
}