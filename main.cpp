#include <iostream>
#include <fstream>
#include "container_atd.h"
using namespace std;
using namespace plants;
int main(int argc, char* argv[])
{
	if (argc != 3)
	{
		cout << "incorrect command line! "
			"Waited: command in_file out_file"
			<< endl;
		exit(1);
	}
	ifstream ifst(argv[1]);
	if (!ifst.is_open())
	{
		cout << "Could not to open input file!" << endl;
		return 1;
	}
	ofstream ofst(argv[2]);
	if (!ofst.is_open())
	{
		cout << "Could not to open output file!" << endl;
		return 1;
	}
	cout << "Start" << endl;
	container c;
	c.in(ifst);
	ofst << "Filled container. " << endl;
	c.sort();
	c.out(ofst);
	c.out_bush(ofst);
	c.multimethod(ofst);
	c.clear();
	ofst << "Empty container. " << endl;
	c.out(ofst);
	cout << "Stop" << endl;
	return 0;
}