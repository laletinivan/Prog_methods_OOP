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
		tree() {} // создание без инициализации.
	};
} // end plants namespace

