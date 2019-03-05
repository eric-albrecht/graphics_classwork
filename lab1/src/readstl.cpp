#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int read_next_stl(string filename)
{
	ifstream input(filename.c_str());
	string linetoread;
	while(!input.eof()) {
		getline(input, linetoread);
		cout << linetoread << endl;
	}
	return 0;
}
