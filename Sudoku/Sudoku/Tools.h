#ifndef TOOLS_H
#define TOOLS_H

#include <vector>
#include <string>
#include <array>

using sudoku = std::array<std::array<int, 9>, 9>;

void split(const std::string& s, char delim, std::vector<std::string>& elems);

std::string* split(const std::string& s, char delim);

std::string delete_char(const std::string& s, char sign);

bool row_contains(const sudoku&, int row, int num);

bool col_contains(const sudoku&, int col, int num);

bool squ_contains(const sudoku&, int row, int col, int num);


#endif