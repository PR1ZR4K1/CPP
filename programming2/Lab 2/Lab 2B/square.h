/**
 * 
 * Jaylon Ignacio
 * Program that finds if square is magic
 * 
 * 
*/

#ifndef SQUARE_H
#define SQUARE_H

#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <math.h>
#include <iomanip>
#include <cassert>


class square
{
private:
    std::vector<std::vector<int>> magicSQ;
    std::string fileName;
    int msum;
public:
    square(std::string fN, std::vector<std::vector<int>> & mQ);
    ~square();

    void read_square();
    void print_magic();
    int row_sum(int i);
    int col_sum(int j);
    int diag1_sum();
    int diag2_sum();
    bool test_magic();
    int magic_sum();

};
#endif