#ifndef SUDOKU_H
#define SUDOKU_H

#include <vector>
#include <string>



class Sudoku
{
private:
	std::vector<std::string> lines;
	bool is_solved(int &row, int &col) const;
	bool num_fits(int num, int row, int col) const;

public:
	int sudoku[9][9];
	Sudoku(const std::vector<std::string>& lines);
	std::string tostring() const;
	bool solve();
};


#endif