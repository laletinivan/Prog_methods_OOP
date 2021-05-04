#include "tree_atd.h"
#include <iostream>
using namespace std;
namespace plants 
{
	void tree::in_data(ifstream& ifst)
	{
		int place, tmp_age;
		ifst >> place;
		if (ifst.fail())
		{
			cout << "Error! Unexpected end of input!" << endl;
			exit(1);
		}
		if (place < 0 || place > 4)
		{
			cout << "Error! Location number should be value from range <0-4>!" << endl;
			exit(1);
		}
		pog = plant::place_of_growth(place);
		ifst >> tmp_age;
		if (ifst.fail())
		{
			cout << "Error! Unexpected end of input!" << endl;
			exit(1);
		}

		if (tmp_age < 0)
		{
			cout << "Error! Age cant be negative!" << endl;
			exit(1);
		}
		age = tmp_age;
	}
	void tree::out(ofstream& ofst) 
	{
		ofst << "Name is " << name << ", ";
		ofst << "number of cons is " << cons << ", ";
		ofst << "place of growth is ";
		switch (pog)
		{
		case TUNDRA:
			ofst << "Tundra ";
			break;
		case TAIGA:
			ofst << "Taiga ";
			break;
		case FOREST:
			ofst << "Forest ";
			break;
		case STEPPE:
			ofst << "Steppe ";
			break;
		case JUNGLE:
			ofst << "Jungle ";
			break;
		default:
			ofst << "<Blank> ";
			break;
		}
		ofst << "and it is tree: age = " << age << endl;
	}
} // end plants namespace