#pragma once
#include "plant_atd.h"
namespace plants {
		// ���������� ��������� �� ������ ����������� �������
		class elem {
			plant* data;
			elem* next;
		public:
			elem* get_next() 
			{ 
				return next; 
			};
			void set_next(elem* a)
			{ 
				next = a; 
			};
			plant* get_data() 
			{ 
				return data; 
			};
			void in(ifstream& ifst) 
			{ 
				data = data->in(ifst); 
			};
			void out(ofstream& ofst) 
			{ 
				data->out(ofst); 
			};
			elem() 
			{ 
				data = NULL; 
				next = NULL; 
			};
			elem(plant* a, elem* b) 
			{ 
				data = a; 
				next = b; 
			};
			~elem() 
			{ 
				delete  data; 
			};
		};
		class container {
			int size; // ������� �����
			elem *head, *tail;
		public:
			void in(ifstream& ifst); // ����
			void out(ofstream& ofst); // �����
			void push(elem* tmp);
			void delete_at(int pos);
			void sort();
			void set_size(int a);
			void set_head(elem* a);
			void set_tail(elem* a);
			int get_size();
			void multimethod(ofstream& ofst);
			elem* get_head();
			elem* get_tail();
			elem* get_elem(int pos);
			void out_bush(ofstream& ofst);
			void clear(); // ������� ���������� �� �����
			container(); // ������������� ����������
			~container() 
			{ 
				clear(); 
			} // ���������� ����������
		};
} // end plants namespace

