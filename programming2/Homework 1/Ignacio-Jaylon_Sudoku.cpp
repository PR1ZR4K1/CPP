#include <iostream>
#include <iomanip>
#include <cassert>
#include <vector>
#include <string>
#include <fstream>
#include "Ignacio-Jaylon_Sudoku.h"
using namespace std;

// reads 6x6 sudoku puzzle; 
void read_sudoku(vector<vector<int> >& sud)
{
	ifstream inp;
	vector<int> nums;
	string file;
	cout << endl;
	cout << "Which sudoku textfile? ";
	cin >> file;
	inp.open(file);
	int next;
	inp >> next;
	while (!inp.fail())
	{
		nums.push_back(next);
		inp >> next;
	}
	inp.close();

	assert(nums.size() == 36);

	int k = 0;
	for (int i = 1; i <= 6; i++)
	{
		vector<int> row;
		for (int j = 1; j <= 6; j++)
		{
			row.push_back(nums[k]);
			k++;
		}
		sud.push_back(row);
	}
	return;
}

void print_sudoku(const vector<vector<int> >& sud)
{
	assert(sud.size() == 6 && sud[0].size() == 6);

	cout << endl;
	cout << "+------+-------+" << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << "|";
		for (int j = 0; j < 6; j++)
			if ((j + 1) % 3 == 0)
				if (sud[i][j] == 0)
					cout << left << setw(2) << "_" << "| ";
				else
				cout << left << setw(2) << sud[i][j] << "| ";
			else
				if (sud[i][j] == 0)
					cout << left << setw(2) << "_";
				else
					cout << left << setw(2) << sud[i][j];
		
		if ((i + 1) % 2 == 0)
			cout << endl
				<< "+------+-------+" << endl;
		else
			cout << endl;
	}
	cout << endl;
	return;
}

bool test_sudoku(const vector<vector<int> >& sud)
{
	assert(sud.size() == 6  && sud[0].size() == 6);

	for (int i = 0; i < 6; i++)
		if (!row_1to6(i, sud))
			return false;
	for (int i = 0; i < 6; i++)
		if (!col_1to6(i, sud))
			return false;
	for (int i = 0; i < 6; i++)
		if (!rect_1to6(i, sud))
			return false;

	return true;
}

bool row_1to6(int i, const vector<vector<int> >& sud)
{
	for (int k = 1; k <= 6; k++)
	{
		bool found = false;
		for (int j = 0; j < 6; j++)
		{
			if (k == sud[i][j])
			{
				found = true;
				break;
			}
		}
		if (!found)
			return false;// k not in row i
	}
	// pass: each k in{ 1..6 } was found in row i; 
	return true;
}

bool col_1to6(int j, const vector<vector<int> >& sud)
{
	for (int k = 1; k <= 6; k++)
	{
		bool found = false;
		for (int i = 0; i < 6; i++)
		{
			if (k == sud[i][j])
			{
				found = true;
				break;
			}
		}
		if (!found)
			return false;// k not in col j
	}
	// pass: each k in{ 1..6 } was found in col j; 
	return true;
}

bool rect_1to6(int n, const vector<vector<int> >& sud)
{
	vector<int> rownos;
	vector<int> colnos;

	rec_rows_cols(n, rownos, colnos);

	for (int k = 1; k <= 6; k++)
	{
		bool found = false;

		for (int i = 0; i < 2; i++)
		{
			int r = rownos[i];
			for (int j = 0; j < 3; j++)
			{
				int c = colnos[j];
				if (k == sud[r][c])
				{
					found = true;
					break;
				}
			}
			if (found)
				break;
		}

		if (!found)
			return false;
	}
	return true;
}

void rec_rows_cols(int n, vector<int>& rownos, vector<int>& colnos)
{
	assert(0 <= n && n < 6);

	vector<int> rows01{ 0,1 };
	vector<int> rows23{ 2,3 };
	vector<int> rows45{ 4,5 };
	vector<int> cols012{ 0,1,2 };
	vector<int> cols345{ 3,4,5 };

	if (n == 0)
	{
		rownos = rows01;
		colnos = cols012;
	}
	else if (n == 1)
	{
		rownos = rows01;
		colnos = cols345;
	}
	else if (n == 2)
	{
		rownos = rows23;
		colnos = cols012;
	}
	else if (n == 3)
	{
		rownos = rows23;
		colnos = cols345;
	}
	else if (n == 4)
	{
		rownos = rows45;
		colnos = cols012;
	}
	else
	{
		rownos = rows45;
		colnos = cols345;
	}
	return;
}

int fix_sudoku(vector<vector<int>> & sud, int row, bool small_big)
{
	int expected_sum = 21;
	int total = 0;
	// true for boolean means its the box on the right or indexes (3-6)
	if (small_big)
	{
		for (int i = 3; i < 6; i++)
		{
			total += sud[row][i];
		}
		if (row % 2 == 0)
		{
			for (int i = 3; i < 6; i++)
			{
				total += sud[row+1][i];
			}
		}
		else 
		{
			for (int i = 3; i < 6; i++)
			{
				total += sud[row-1][i];
			}
		}
	}
	else
	{
		for (int i = 0; i < 3; i++)
		{
			total += sud[row][i];
		}
		if (row % 2 == 0)
		{
			for (int i = 0; i < 3; i++)
			{
				total += sud[row+1][i];
			}
		}
		else 
		{
			for (int i = 0; i < 3; i++)
			{
				total += sud[row-1][i];
			}
		}
	}
	// iterate through every index in the row


	return expected_sum - total;
}

