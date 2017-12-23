#include "Sudoku.h"
#include <vector>
#include <iostream>
#include <string>
#include "Tools.h"

using namespace std;


Sudoku::Sudoku(const vector<string>& values)
{
	lines = values;
	int i = 0;
	for (const string& line : lines)
	{
		string temp = delete_char(line, ' ');
		for (size_t j = 0; j < temp.size(); ++j)
		{
			sudoku[i][j] = temp[j] - '0';
		}
		++i;
	}
}

string Sudoku::tostring() const
{
	string s;
	for (const string& line : lines)
	{
		s += line + "\n";
	}
	return s.substr(0, s.size() - 1);
}


bool Sudoku::is_solved(int &row, int &col) const
{
	for (row = 0; row < 9; ++row)
	{
		for (col = 0; col < 9; ++col)
		{
			if (sudoku[row][col] == 0) return false;
		}
	}
	return true;
}

bool Sudoku::num_fits(int num, int row, int col) const
{
	return !(row_contains(sudoku, row, num) || col_contains(sudoku, col, num) || squ_contains(sudoku, row - (row % 3), col - (col % 3), num));
}

bool Sudoku::solve()
{
	int row, col;
	if (is_solved(row, col)) return true;
	else
	{
		for (int k = 1; k < 10; ++k)
		{
			if (num_fits(k, row, col))
			{
				sudoku[row][col] = k;
				if (solve()) return true;
				sudoku[row][col] = 0;
			}
		}
		return false;
	}
}