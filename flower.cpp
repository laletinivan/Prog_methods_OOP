#include "flower_atd.h"
using namespace std;
namespace plants {
	void flower::InData(ifstream& ifst) {
		int tmp;
		ifst >> tmp;
		t = flower::type(tmp);
	}
	void flower::Out(ofstream& ofst) {
		ofst << "Name is " << name << " ";
		ofst << "and it is flower: type = ";
		switch (t) {
		case 0:
			ofst << "Home";
			break;
		case 1:
			ofst << "Garden";
			break;
		case 2:
			ofst << "Wild";
			break;
		default:
			break;
		}
		ofst << endl;
	}
} // end plants namespace