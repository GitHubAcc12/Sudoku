#ifndef SUDOKU_H
#define SUDOKU_H

#include <vector>
#include <array>
#include <string>



class Sudoku
{
private:
	std::vector<std::string> lines;
	bool is_solved(int &row, int &col) const;
	bool num_fits(int num, int row, int col) const;

public:
	std::array<std::array<int, 9>, 9> sudoku;
	Sudoku(const std::vector<std::string>& lines);
	std::string tostring() const;
	bool solve();
};


#endif