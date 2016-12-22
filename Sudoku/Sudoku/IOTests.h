#ifndef IOTESTS_H
#define IOTESTS_H

#include "Reader.h"
#include "Writer.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void io_test()
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
	cout << "-----------------------------------------------" << endl;
	for (const string& line : r2.read())
	{
		cout << line << endl;
	}
}


#endif