#include <iostream>
#include "readstl.h"
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
	if(argc < 2)
	{
		cout << "STL File to read is not listed" << endl;
	}
	read_next_stl(argv[1]);
	return 0;
}
