#include <iostream>

using namespace std;

int main() 
{
    // Initialize variables
    int i = 1;
    int multiple = 6*i;

    do 
    {
        // Increase i
        i++;
        // Print Mutliple
        cout << multiple << endl;
        // Multiple is 6*i
        multiple = 6*i;
    } while(multiple < 80); // Make sure multiple is less than 80
    
    return 1;
}