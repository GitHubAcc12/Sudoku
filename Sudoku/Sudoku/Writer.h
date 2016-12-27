#ifndef WRITER_H
#define WRITER_H

#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include "Sudoku.h"

using namespace std;

class Writer
{
private:
	const char* path;
	void clear();

public:
	Writer(const char* path) : path(path) {}
	void write(const vector<string>& lines);
	void write(const int arr[9][9]);
};


#endif