#include <iostream>

using namespace std;

int main() 
{
    // Loop 20 times to print 20 multiples
    for(int i = 0;i<20;i++)
    {
        // A multiple 6 is 6* a number, in this case our numbers are 1-20 for the first
        // 20 multiples
        cout << "Multiple " << i+1 << ": " << 6*(i+1) << endl;
    }
    return 1;
}