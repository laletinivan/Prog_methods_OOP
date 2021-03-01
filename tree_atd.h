#pragma once
// Требуется описание класса plant
#include "plant_atd.h"
namespace plants {
	class tree : public plant {
		long int age;
	public:
		// переопределяем интерфейс класса
		void InData(ifstream& ifst); // ввод
		void Out(ofstream& ofst); // вывод
		tree() {} // создание без инициализации.
	};
} // end plants namespace

