#include "plant_atd.h"
// Необходима подключить информацию обо всех имеющихся
// геометрических фигурах
#include "bush_atd.h"
#include "tree_atd.h"
#include "flower_atd.h"
using namespace std;
namespace plants {
	void plant::OutBush(ofstream& ofst) {
		ofst << endl;
	}
	// Ввод параметров обобщенной фигуры
	plant* plant::In(ifstream& ifst) {
		plant* sp;
		int k;
		ifst >> k;
		switch (k) {
		case 1:
			sp = new bush;
			ifst >> sp->name;
			break;
		case 2:
			sp = new tree;
			ifst >> sp->name;
			break;
		case 3:
			sp = new flower;
			ifst >> sp->name;
			break;
		default:
			return 0;
		}
		sp->InData(ifst);
		return sp;
	}
} // end plants namespace