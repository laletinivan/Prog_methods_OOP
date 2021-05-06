#pragma once
// Требеутся описание класса plant
#include "plant_atd.h"
namespace plants {
	class bush : public plant 
	{
		enum flowering_month 
		{ 
			JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC 
		};
		flowering_month m;
	public:
		// переопределяем интерфейс класса
		void in_data(ifstream& ifst); // ввод
		void out(ofstream& ofst); // вывод
		void out_bush(ofstream& ofst);
		void multimethod(plant* other, ofstream& ofst);
		void mm_tree(ofstream& ofst);
		void mm_bush(ofstream& ofst);
		void mm_flower(ofstream& ofst);
		bush() {} // создание без инициализации.
	};
} // end plants namespace

