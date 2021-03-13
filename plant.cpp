#include "plant_atd.h"
// Необходима подключить информацию обо всех имеющихся
// геометрических фигурах
#include "bush_atd.h"
#include "tree_atd.h"
using namespace std;
namespace plants {
	// Сравнение для растений по количеству согласных букв
	bool plant::Compare(plant& other) {
		return cons < other.cons;
	}
	// Количество согласных букв
	void plant::Consanants() {
		string vowel = "AEIOUaeiou";
		cons = 0;
		for (int i = 0; i < name.length(); i++) {
			if (vowel.find(name[i]) == string::npos) {
				cons++;
			}
		}
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
			sp->Consanants();
			break;
		case 2:
			sp = new tree;
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