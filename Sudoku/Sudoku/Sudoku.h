#ifndef SUDOKU_H
#define SUDOKU_H

#include <vector>
#include <array>
#include <iostream>
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
	friend std::ostream& operator<<(std::ostream& out, const Sudoku& s)
	{
		for (const std::string& line : s.lines)
		{
			out << line + '\n';
		}
		return out;
	}
	bool solve();
};


#endif