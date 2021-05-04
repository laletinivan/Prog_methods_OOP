#include "flower_atd.h"
#include <iostream>
using namespace std;
namespace plants 
{
	void flower::in_data(ifstream& ifst) 
	{
		int place, type;
		ifst >> place;
		if (ifst.fail())
		{
			cout << "Error! Unexpected end of input!" << endl;
			exit(1);
		}

		if (place < 0 || place > 4)
		{
			cout << "Error! Location number should be value from range <0-4>!";
			exit(1);
		}
		pog = plant::place_of_growth(place);
		ifst >> type;
		if (ifst.fail())
		{
			cout << "Error! Unexpected end of input!" << endl;
			exit(1);
		}

		if (type < 0 || type > 2)
		{
			cout << "Error! Type of flower should be value in range <0-2>!" << endl;
			exit(1);
		}
		t = flower::type(type);
	}
	void flower::out(ofstream& ofst) 
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
		ofst << "and it is flower: type = ";
		switch (t) 
		{
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