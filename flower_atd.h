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
		// �������������� ��������� ������
		void in_data(ifstream& ifst); // ����
		void out(ofstream& ofst); // �����
		void multimethod(plant* other, ofstream& ofst);
		void mm_tree(ofstream& ofst);
		void mm_bush(ofstream& ofst);
		void mm_flower(ofstream& ofst);
		flower() {} // �������� ��� �������������.
	};
} // end plants namespace
