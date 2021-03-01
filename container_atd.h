#pragma once
#include "plant_atd.h"
namespace plants {
		// Простейший контейнер на основе одномерного массива
		class elem {
			plant* data;
			elem* next;
		public:
			elem* GetNext() { return next; };
			void SetNext(elem* a) { next = a; };
			void In(ifstream& ifst) { data = data->In(ifst); };
			void Out(ofstream& ofst) { data->Out(ofst); };
			elem() { data = NULL; next = NULL; };
			elem(plant* a, elem* b) { data = a; next = b; };
			~elem() { delete  data; };
		};
		class container {
			int size; // текущая длина
			elem *head, *tail;
		public:
			void In(ifstream& ifst); // ввод
			void Out(ofstream& ofst); // вывод
			void Clear(); // очистка контейнера от фигур
			container(); // инициализация контейнера
			~container() { Clear(); } // утилизация контейнера
		};
} // end plants namespace

