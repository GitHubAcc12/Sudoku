#include "Reader.h"
#include "Writer.h"
#include <iostream>
#include <vector>
#include <string>

int main()
{
	auto path = "Sudoku1.txt";
	Reader r(path);
	const auto& v = r.read();
	for (const string& line : v)
	{
		cout << line << endl;
	}
	path = "output.txt";
	Writer w(path);
	w.write(v);
	Reader r2(path);
	for (const string& line : r2.read())
	{
		cout << line << endl;
	}
	
}