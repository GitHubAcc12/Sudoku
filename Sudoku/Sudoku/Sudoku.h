#ifndef SUDOKU_H
#define SUDOKU_H

#include <vector>
#include <string>

using namespace std;


class Sudoku
{
private:
	int sudoku[9][9];
	vector<string> lines;

public:
	Sudoku(const vector<string>& lines);
	string tostring() const;
	void solve();
	bool is_solved() const;
	bool contains(int num, int row, int col, int idx) const;
};


#endif