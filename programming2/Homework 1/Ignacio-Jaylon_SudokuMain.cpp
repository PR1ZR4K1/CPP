// main.cpp
// create magic square via algorithm in Horstmann, Big C++, Chapter 6

#include <iostream>
#include <cassert>
#include <vector>
#include "Ignacio-Jaylon_Sudoku.h"
using namespace std;

int main()
{
	vector<vector<int> > mysudoku;

	read_sudoku(mysudoku);
	print_sudoku(mysudoku);

	if (test_sudoku(mysudoku))
	{
		cout << endl;
		cout << "YES, this is a solved 6x6 Sudoku :-)" 
			<< endl << endl;
	}
	else
	{
		cout << endl;
		cout << "TOO BAD ... this is not yet a 6x6 Sudoku solution :-(" 
			<< endl << endl;

		cout << "Solving the rest...";
		cout << "These cells still need values\n";
		for (int i = 0; i < 6; i++){
			for (int j = 0; j < 6; j++)
			{
				if (mysudoku[i][j] == 0)
				{
					cout << "(" << i << ","<< j << ")\t";
					if (j > 3)
					{
						mysudoku[i][j] = fix_sudoku(mysudoku, i, true);
					}
					else
					{
						mysudoku[i][j] = fix_sudoku(mysudoku, i, false);
					}
				}
			}
		}
		cout << "\n\nNow Solved :-)\n";
		print_sudoku(mysudoku);

	}
	return 0;
}





