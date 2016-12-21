#include "Reader.h"
#include <iostream>
#include <vector>
#include <string>

int main()
{
	auto path = "Sudoku1.txt";
	Reader<decltype(path)> r(path);
	for (const string& line : r.read())
	{
		cout << line << endl;
	}
}