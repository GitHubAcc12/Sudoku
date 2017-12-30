#include "Reader.h"
#include <vector>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

vector<string> Reader::read()
{
		vector<string> lines;
		ifstream inputfile(path);
		for (string s;;)
		{
			getline(inputfile, s);
			if (inputfile.fail()) break;
			lines.push_back(s);
		}
		if (!inputfile.eof()) cout << "Fehler beim Einlesen" << endl;
		inputfile.close();
		return lines;
}