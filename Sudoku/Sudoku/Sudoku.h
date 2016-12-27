#ifndef SUDOKU_H
#define SUDOKU_H

#include <vector>
#include <string>

using namespace std;


class Sudoku
{
private:
	vector<string> lines;
	bool is_solved(int &row, int &col) const;
	bool num_fits(int num, int row, int col) const;

public:
	int sudoku[9][9];
	Sudoku(const vector<string>& lines);
	string tostring() const;
	bool solve();
};


#endif