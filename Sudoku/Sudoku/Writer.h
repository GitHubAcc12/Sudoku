#ifndef WRITER_H
#define WRITER_H

#include <fstream>
#include <iostream>

using namespace std;

class Writer
{
private:
	ofstream outputfile;

public:
	Writer(const char* path) : outputfile(path, ios::app) {}
	void write(const vector<string>& lines)
	{
		int i = 0;
		for (const string& line : lines)
		{
			outputfile << line << endl; //Fehler beim Einlesen
		}
		outputfile.flush();
		outputfile.close();
	}
};


#endif