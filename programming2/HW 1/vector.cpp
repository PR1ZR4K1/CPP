#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Make vector of some veggies
    vector<string> vect{"Broccoli", "Celerey"};
    
    // Add some veggies to the vector
    vect.push_back("Cabbage");
    vect.push_back("Carrot");

    // Loop through the size of the vector
    for(int i = 0; i < vect.size();i++)
    {
        cout << vect[i] << endl; // Print the current vector element
    }
}