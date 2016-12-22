#ifndef WRITER_H
#define WRITER_H

#include <fstream>
#include <iostream>

using namespace std;

template<typename T> class Writer
{
private:
	ofstream outputfile;

public:
	Writer(const T& path) : outputfile(path) {}
	void write(const vector<string>& lines)
	{
		for (const string& line : lines)
		{
			outputfile << line << endl;
		}
	}
};


#endif