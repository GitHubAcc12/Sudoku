#include <string>
#include <sstream>
#include <vector>

using namespace std;


void split(const string& s, char delim, vector<string>& elems)
{
	stringstream ss;
	ss.str(s);
	string item;
	while (getline(ss, item, delim))
	{
		elems.push_back(item);
	}
}

string* split(const string& s, char delim)
{
	vector<string> elems;
	split(s, delim, elems);
	return &elems[0];
}

string delete_char(const string& s, char sign)
{
	string ret;
	for (size_t i = 0; i < s.size(); ++i)
	{
		if (s[i] != sign) ret += s[i];
	}
	return ret;
}

bool row_contains(const int(&sudoku)[9][9], int row, int num)
{
	for (int i = 0; i < 9; ++i)
	{
		if (sudoku[row][i] == num) return true;
	}
	return false;
}

bool col_contains(const int(&sudoku)[9][9], int col, int num)
{
	for (int i = 0; i < 9; ++i)
	{
		if (sudoku[i][col] == num) return true;
	}
	return false;
}

bool squ_contains(const int(&sudoku)[9][9], int idx, int num)
{
	for (int i = idx; i < 3; ++i)
	{
		for (int j = idx; j < 3; ++j)
		{
			if (sudoku[i][j] == num) return true;
		}
	}
	return false;
}