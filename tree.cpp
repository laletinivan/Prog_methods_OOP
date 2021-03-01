#include "tree_atd.h"
using namespace std;
namespace plants {
	void tree::InData(ifstream& ifst) {
		ifst >> age;
	}
	void tree::Out(ofstream& ofst) {
		ofst << "Name is " << name << " ";
		ofst << "and it is tree: age = " << age << endl;
	}
} // end plants namespace