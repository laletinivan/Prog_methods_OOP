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
			plant* GetData() { return data; };
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
			void Push(elem* tmp);
			void DeleteAt(int pos);
			void Sort();
			void SetSize(int a);
			void SetHead(elem* a);
			void SetTail(elem* a);
			void Clear(); // ������� ���������� �� �����
			container(); // ������������� ����������
			~container() { Clear(); } // ���������� ����������
		};
} // end plants namespace

