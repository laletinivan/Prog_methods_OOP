#include "tree_atd.h"
using namespace std;
namespace plants {
	void tree::InData(ifstream& ifst) {
		int tmp;
		ifst >> tmp;
		pog = plant::place_of_growth(tmp);
		ifst >> age;
	}
	void tree::Out(ofstream& ofst) {
		ofst << "Name is " << name << ", ";
		ofst << "number of cons is " << cons << ", ";
		ofst << "place of growth is ";
		switch (pog) {
		case Tundra:
			ofst << "Tundra ";
			break;
		case Taiga:
			ofst << "Taiga ";
			break;
		case Forest:
			ofst << "Forest ";
			break;
		case Steppe:
			ofst << "Steppe ";
			break;
		case Jungle:
			ofst << "Jungle ";
			break;
		default:
			ofst << "<Blank> ";
			break;
		}
		ofst << "and it is tree: age = " << age << endl;
	}
} // end plants namespace