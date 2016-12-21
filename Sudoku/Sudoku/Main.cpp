#include "Reader.h"
#include <iostream>

using namespace std;

int main()
{
	Reader r("C:\\Users\\Jan_\\Desktop\\Sudoku1.txt");
	for (const string& line : r.read())
	{
		cout << line << endl;
	}
}