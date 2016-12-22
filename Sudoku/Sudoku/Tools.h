#ifndef TOOLS_H
#define TOOLS_H

#include <string>
#include <sstream>
using namespace std;



void split(const string& s, char delim, vector<string>& elems)
{
	stringstream ss;
	ss.str(s);
	string item;
	while (getline(ss, item, delim))
	{
		elems.push_back(item);
	}
}

string* split(const string& s, char delim)
{
	vector<string> elems;
	split(s, delim, elems);
	return &elems[0];
}

string delete_char(const string& s, char sign)
{
	string ret;
	for (size_t i = 0; i < s.size(); ++i)
	{
		if (s[i] != sign) ret += s[i];
	}
	return ret;
}


#endif