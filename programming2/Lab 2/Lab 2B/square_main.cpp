/*
 * 
 * Main file for object orientated version of magic square program 
 * 
 * 
*/

#include "square.h"

int main()
{
    std::string file;

    std::cout << "Please enter the name of the file you would like to test (blah.txt): ";
    std::cin >> file;
    std::vector<std::vector<int>> mag;

    square magic(file, mag);

    magic.print_magic();

    if (magic.test_magic())
    {
        std::cout << "\nThe magic sum of this square is: " << magic.magic_sum() << "\n";
    }
    else
    {
        std::cout << "\nThe magic test fails!!\n";
    }

    return 0;
}