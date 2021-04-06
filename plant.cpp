#include "plant_atd.h"
#include "bush_atd.h"
#include "tree_atd.h"
#include "flower_atd.h"
using namespace std;
namespace plants {
	void plant::OutBush(ofstream& ofst) {
		ofst << endl;
	}
	// ��������� ��� �������� �� ���������� ��������� ����
	bool plant::Compare(plant& other) {
		return cons < other.cons;
	}
	// ���������� ��������� ����
	void plant::Consanants() {
		string vowel = "AEIOUaeiou";
		cons = 0;
		for (int i = 0; i < name.length(); i++) {
			if (vowel.find(name[i]) == string::npos) {
				cons++;
			}
		}
	}
	// ���� ���������� ���������� ������
	plant* plant::In(ifstream & ifst) {
		plant* sp;
		int k;
		ifst >> k;
		switch (k) {
		case 1:
			sp = new bush;
			ifst >> sp->name;
			sp->Consanants();
			break;
		case 2:
			sp = new tree;
			ifst >> sp->name;
			sp->Consanants();
			break;
		case 3:
			sp = new flower;
			ifst >> sp->name;
			sp->Consanants();
			break;
		default:
			return 0;
		}
		sp->InData(ifst);
		return sp;
	}
} // end plants namespace
