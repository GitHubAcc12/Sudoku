#ifndef WRITER_H
#define WRITER_H


#include <fstream>
#include <iostream>
#include <vector>
#include <string>

#include "Tools.h"
#include "Sudoku.h"


class Writer
{
private:
	const char* path;
	void clear();

public:
	Writer(const char* path) : path(path) {}
	void write(const std::vector<std::string>& lines);
	void write(const sudoku&);
};


#endif