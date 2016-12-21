#ifndef READER_H
#define READER_H

#include <fstream>
#include <vector>
#include <string>
using namespace std;

template<typename T> class Reader
{
private:
	ifstream inputfile;

public:
	Reader(const T& path) : inputfile(path) {}
	vector<string> read()
	{
		vector<string> lines;
		for (string s;;)
		{
			getline(inputfile, s);
			if (inputfile.eof()) break;
			lines.push_back(s);
		}
		if (inputfile.fail()) cout << "Fehler beim Einlesen" << endl;
		return lines;
	}
};


#endif
