#ifndef READER_H
#define READER_H

#include <fstream>
#include <vector>


class Reader
{
private:
	const char* path;

public:
	Reader(const char* path) : path(path) {}
	std::vector<std::string> read();
};


#endif