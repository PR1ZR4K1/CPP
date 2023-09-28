#ifndef SUDOKU_H_
#define SUDOKU_H_

#include <vector>
using namespace std;

// function prototypes ("function declarations")

void read_sudoku(vector<vector<int> >&);
void print_sudoku(const vector<vector<int> >&);
bool test_sudoku(const vector<vector<int> >&);
bool row_1to6(int, const vector<vector<int> >&);
bool col_1to6(int, const vector<vector<int> >&);
bool rect_1to6(int n, const vector<vector<int> >& sud);
void rec_rows_cols(int, vector<int>&, vector<int>&);
int fix_sudoku(vector<vector<int>> &, int row, bool s_b);






#endif
