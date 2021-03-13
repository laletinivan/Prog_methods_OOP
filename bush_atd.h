#pragma once
// Требеутся описание класса plant
#include "plant_atd.h"
namespace plants {
	class bush : public plant {
		enum flowering_month { JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };
		flowering_month m;
	public:
		// переопределяем интерфейс класса
		void InData(ifstream& ifst); // ввод
		void Out(ofstream& ofst); // вывод
		void OutBush(ofstream& ofst);
		bush() {} // создание без инициализации.
	};
} // end plants namespace

