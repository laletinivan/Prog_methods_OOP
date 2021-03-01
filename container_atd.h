#pragma once
#include "plant_atd.h"
namespace plants {
		// ���������� ��������� �� ������ ����������� �������
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
			int size; // ������� �����
			elem *head, *tail;
		public:
			void In(ifstream& ifst); // ����
			void Out(ofstream& ofst); // �����
			void Clear(); // ������� ���������� �� �����
			container(); // ������������� ����������
			~container() { Clear(); } // ���������� ����������
		};
} // end plants namespace

