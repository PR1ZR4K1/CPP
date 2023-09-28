// main.cpp
// create magic square via algorithm in Horstmann, Big C++, Chapter 6

#include <iostream>
#include <cassert>
#include "Vector.h"
#include "Ignacio-Jaylon-ModdedSudoku.h"
using namespace std;

int main()
{
	Vector<Vector<int> > mysudoku;

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
	}

	return 0;
}





