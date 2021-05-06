#pragma once
#include "plant_atd.h"
namespace plants 
{
	class flower : public plant 
	{
		enum type 
		{ 
			HOME, GARDEN, WILD 
		};
		type t;
	public:
		// переопределяем интерфейс класса
		void in_data(ifstream& ifst); // ввод
		void out(ofstream& ofst); // вывод
		void multimethod(plant* other, ofstream& ofst);
		void mm_tree(ofstream& ofst);
		void mm_bush(ofstream& ofst);
		void mm_flower(ofstream& ofst);
		flower() {} // создание без инициализации.
	};
} // end plants namespace
