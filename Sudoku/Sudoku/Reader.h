#ifndef READER_H
#define READER_H

#include <fstream>
#include <vector>
#include <string>
using namespace std;

class Reader
{
private:
	ifstream inputfile;

public:
	template<typename T> Reader(const T& path) : inputfile(path) {}
	vector<string> read();
};


#endif
