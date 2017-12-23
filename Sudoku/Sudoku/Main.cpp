#include "Reader.h"
#include "Writer.h"
#include "Sudoku.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	auto file = "Sudoku1.txt";
	Reader r(file);
	auto& v = r.read();
	Sudoku s(v);
	cout << s.tostring() << endl;
	s.solve();
	file = "output.txt";
	Writer w(file);
	w.write(s.sudoku);
}