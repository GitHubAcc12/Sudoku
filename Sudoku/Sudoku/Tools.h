#ifndef TOOLS_H
#define TOOLS_H

#include <vector>
#include <string>

void split(const std::string& s, char delim, std::vector<std::string>& elems);

std::string* split(const std::string& s, char delim);

std::string delete_char(const std::string& s, char sign);

bool row_contains(const int(&sudoku)[9][9], int row, int num);

bool col_contains(const int(&sudoku)[9][9], int col, int num);

bool squ_contains(const int(&sudoku)[9][9], int row, int col, int num);


#endif