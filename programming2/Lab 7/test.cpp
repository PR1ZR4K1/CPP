#include <iostream>
#include <vector>
#include "Ignacio_Vector.h"
#include "List.h"
using std::cout;
using std::vector;

// void remove_odds(Vector<int>& vec)
// {
//     Vector<int>::iterator itr = vec.begin();
//     cout << vec.end();
//     while (itr != vec.end())
//     {
//         cout << *itr;
//         if (*itr % 2 == 1)
//         {
//             vec.erase(itr);
//         }
        
//     }
//     return;
// }


int main()
{

    // make vector variable named vec and give it 3 values of different integers
    // Vector<int> vec = {1, 2, 3};

    List<int> mylist;

    List<int>::iterator itr = mylist.begin();
    mylist.insert(itr, 1);
    itr++;
    mylist.insert(itr, 2);
    itr++;
    mylist.insert(itr, 3);
    itr++;
    mylist.insert(itr, 4);
    itr++;
    mylist.insert(itr, 5);
    itr++;

    cout << mylist[0];  
    return 0; 
}