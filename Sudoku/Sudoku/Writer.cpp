#include "Writer.h"
#include <fstream>
#include <iostream>
#include <vector>
#include <string>


void Writer::write(const vector<string>& lines)
{
	this->clear();
	ofstream outputfile(path, ios::app);
	for (int i = 0; i < lines.size() - 1; ++i)
	{
		outputfile << lines[i] << endl;
	}
	outputfile << lines[lines.size() - 1];
	outputfile.flush();
	outputfile.close();
}

void Writer::clear()
{
	ofstream file(path, ios::trunc | ios::out);
}
