#include "Reader.h"
#include "Writer.h"
#include "IOTests.h"
#include "Sudoku.h"
#include <iostream>
#include <vector>
#include <string>






int main()
{
	auto path = "Sudoku1.txt";
	Reader r(path);
	const auto& v = r.read();
	Sudoku s(v);
	cout << s.tostring() << endl;
}