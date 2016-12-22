#ifndef TOOLS_H
#define TOOLS_H


void split(const string& s, char delim, vector<string>& elems);

string* split(const string& s, char delim);

string delete_char(const string& s, char sign);

bool row_contains(const int(&sudoku)[9][9], int row, int num);

bool col_contains(const int(&sudoku)[9][9], int col, int num);

bool squ_contains(const int(&sudoku)[9][9], int idx, int num);


#endif