#include "Writer.h"
#include "Tools.h"
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include "Sudoku.h"

using namespace std;


void Writer::write(const vector<string>& lines)
{
	clear();
	ofstream outputfile(path, ios::app);
	for (int i = 0; i < lines.size() - 1; ++i)
	{
		outputfile << lines[i] << endl;
	}
	outputfile << lines[lines.size() - 1];
	outputfile.flush();
	outputfile.close();
}


void Writer::write(const sudoku& arr)
{
	clear();
	ofstream outputfile(path, ios::app);
	for (int i = 0; i < 9; ++i)
	{
		for (int j = 0; j < 9; ++j)
		{
			outputfile << arr[i][j];
			if (j < 8) outputfile << " ";
		}
		if (i < 8) outputfile << endl;
	}
	outputfile.flush();
	outputfile.close();
}



void Writer::clear()
{
	ofstream file(path, ios::trunc | ios::out);
}