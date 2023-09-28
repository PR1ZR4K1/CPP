/**
 * 
 * Jaylon  
 *  
 * Program implements reading from a file and recursion in c++ 
 * 
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

// checks if word is a palindrome
bool is_palindrome(std::string s, int start, int end)
{
    // checks if the difference between the last and first cup of the word
    // is only 1
    if(end - start == 1 )
    {
        return true;
    }
    // if the difference is greater than one then compare the two cups to see if they are equal
    else if(s[start] == s[end-1])
    {
        // call function again with different start and end indexes
        // which will repeat until difference between start and end cups is only 1
        return is_palindrome(s, start+1, end-1);
    }
    // not a palindrome
    return false;

}

// reads from a file and appends lines of strings into vector
void read(std::ifstream & in, std::vector<std::string> & v) 
{
    std::string line;
    // while not in a failed state
    while(!in.eof())
    {
        // gets first line from file and throws it into str line
        in >> line;
        v.push_back(line);
        // sets line back to nothing
        line = "";
    }
    // close the file
    in.close();
}


int main()
{
    std::vector<std::string> palindromes{};
    std::ifstream file;
    std::string line;
    char file_name[15];

    // gets input and opens file
    std::cout << "Please enter the name of the file to read: " ;
    std::cin >> file_name;

    file.open(file_name, std::ios::in);

    // checks if file is available or not
    if(!file)
    {
    std::cout<<"Sorry the file you are looking for is not available!"<<std::endl;
    return -1;
    }

    read(file, palindromes);

    // iterate through every word in palindromes
    for (std::string word: palindromes)

    // a word must be an actual palindrome and an actual word
        if(is_palindrome(word, 0 , word.length()) && word.length() > 1)
        {
            std::cout << "The word: " << word << " is a palindrome\n";
        }
        else 
        {
            std::cout << "The word: " << word << " is not a palindrome\n";
        }
    // close the file when done 
    file.close();
}