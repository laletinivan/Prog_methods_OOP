#pragma once
// Требуется описание класса plant
#include "plant_atd.h"
namespace plants 
{
	class tree : public plant 
	{
		long int age;
	public:
		// переопределяем интерфейс класса
		void in_data(ifstream& ifst); // ввод
		void out(ofstream& ofst); // вывод
		void multimethod(plant* other, ofstream& ofst);
		void mm_tree(ofstream& ofst);
		void mm_bush(ofstream& ofst);
		void mm_flower(ofstream& ofst);
		tree() {} // создание без инициализации.
	};
} // end plants namespace

