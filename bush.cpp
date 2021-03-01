#include "bush_atd.h"
using namespace std;
namespace plants {
	void bush::InData(ifstream& ifst) {
		int temp;
		ifst >> temp;
		m = bush::flowering_month(temp);
	}
	void bush::Out(ofstream& ofst) {
		ofst << "Name is " << name << " ";
		ofst << "and it is bush: flowering month = ";
		switch (m) {
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