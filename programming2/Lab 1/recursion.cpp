// 1. (Recursion) Write a program that uses recursion to check whether a string is a palindrome. If it is, cout ‘YES’. If not, cout ‘NO’.
//     a. Hint: write a function called checkIfPalindrome that accepts a string s, an int start, an int end. It should return a bool.
//         i. General case:
//             1. If string at position start is equal string at position end, return checkIfPalindrome(s, start+1, end-1)
//             2. If not, return false
//         ii. Base cases:
//             1. If end-start == 1 (theres only one character left to check), return true.
//             2. If end-start==0 (theres no characters left to check), return true.
//     b. Test for the following cases:
//         i. Racecar
//         ii. Noon
//         iii. book

#include <string>
#include <iostream>

bool checkIfPalindrome(std::string s, int start, int end)
{
    if(end - start == 1 || end - start == 0)
    {
        return true;
    }
    if(s[start] == s[end-1])
    {
        return checkIfPalindrome(s, start+1, end-1);
    }
    return false;
}

int main()
{
    std::string words[3] = {"Racecar", "Noon", "Book"};

    for(std::string word : words)
    {
        word[0] += 32;
        if(checkIfPalindrome(word, 0, word.size()))
        {
            std::cout << word << " is a palindrome" << std::endl;
        }
        else
        {
            std::cout << word << " is not a palindrome" << std::endl;
        }
    }

    return 1;
}