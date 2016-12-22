#ifndef WRITER_H
#define WRITER_H

#include <fstream>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Writer
{
private:
	const char* path;

public:
	Writer(const char* path) : path(path) {}
	void write(const vector<string>& lines);
	void clear();
};


#endif