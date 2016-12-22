#include "Reader.h"
#include "Writer.h"
#include <iostream>
#include <vector>
#include <string>

int main()
{
	auto path = "Sudoku1.txt";
	Reader<decltype(path)> r(path);
	const auto& v = r.read();
	for (const string& line : v)
	{
		cout << line << endl;
	}
	path = "output.txt";
	Writer<decltype(path)> w(path);
	w.write(v);
	Reader<decltype(path)> r2(path);
	for (const string& line : r2.read())
	{
		cout << line << endl;
	}
	
}