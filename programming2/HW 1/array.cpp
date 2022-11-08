#include <iostream>

using namespace std;

int main()
{
    // Make an array of strings
    const char* a[] = {"Apple","Banana","Mango","Orange","Strawberry"};
    
    // Loop through the size of a
    for(int i = 0; i < (sizeof(a) / sizeof(int));i++)
    {
        cout << a[i] << endl; // Print the current element on that index
    }

}