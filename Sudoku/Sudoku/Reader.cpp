#include "Reader.h"
#include <fstream>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

template<typename T> Reader::Reader(const T& path) : inputfile(path)
{
}

vector<string> Reader::read()
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