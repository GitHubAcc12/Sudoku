#ifndef READER_H
#define READER_H

#include <fstream>
#include <vector>

using namespace std;

class Reader
{
private:
	const char* path;

public:
	Reader(const char* path) : path(path) {}
	vector<string> read();
};


#endif
