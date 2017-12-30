#include "Reader.h"
#include "Writer.h"
#include "Sudoku.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	string file;
	if (argc == 2)
	{
		file = argv[1];
	} 
	else
	{
		cout << "Inputfile: ";
		cin >> file;
	}

	Reader r(file.c_str());
	auto& v = r.read();
	Sudoku s(v);
	cout << s.tostring() << endl;
	s.solve();
	file = "output.txt";
	Writer w(file.c_str());
	w.write(s.sudoku);
}