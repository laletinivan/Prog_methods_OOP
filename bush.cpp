#include "bush_atd.h"
#include <iostream>
using namespace std;
namespace plants 
{
	void bush::out_bush(ofstream& ofst) 
	{
		out(ofst);
	}
	void bush::in_data(ifstream& ifst) 
	{
		int place, mnth;
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
		ifst >> mnth;
		if (ifst.fail())
		{
			cout << "Error! Unexpected end of input!" << endl;
			exit(1);
		}

		if (mnth < 0 || mnth > 11)
		{
			cout << "Error! Month should be value from range <0-11>" << endl;
			exit(1);
		}
		m = bush::flowering_month(mnth);
	}
	void bush::out(ofstream& ofst) 
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
		ofst << "and it is bush: flowering month = ";
		switch (m) 
		{
		case 0:
			ofst << "January";
			break;
		case 1:
			ofst << "February";
			break;
		case 2:
			ofst << "March";
			break;
		case 3:
			ofst << "April";
			break;
		case 4:
			ofst << "May";
			break;
		case 5:
			ofst << "June";
			break;
		case 6:
			ofst << "July";
			break;
		case 7:
			ofst << "August";
			break;
		case 8:
			ofst << "September";
			break;
		case 9:
			ofst << "October";
			break;
		case 10:
			ofst << "November";
			break;
		case 11:
			ofst << "December";
			break;
		default:
			break;
		}
		ofst << endl;
	}
} // end plants namespace