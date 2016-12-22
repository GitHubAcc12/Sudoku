#include "Sudoku.h"
#include <vector>
#include <iostream>
#include <string>
#include "Tools.h"

using namespace std;


Sudoku::Sudoku(const vector<string>& lines)
{
	this->lines = lines;
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


bool Sudoku::is_solved() const
{
	for (int i = 0; i < 9; ++i)
	{
		if (col_contains(sudoku, i, 0)) return false;
	}
	return true;
}

bool Sudoku::contains(int num, int row, int col, int idx) const
{
	return row_contains(sudoku, row, num) || col_contains(sudoku, col, num) || squ_contains(sudoku, idx, num);
}

void Sudoku::solve()
{

}