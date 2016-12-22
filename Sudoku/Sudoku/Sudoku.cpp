#include "Sudoku.h"
#include <vector>
#include <iostream>
#include <string>
#include "Tools.h"
#include <algorithm>

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
