#pragma once
// ��������� �������� ������ plant
#include "plant_atd.h"
namespace plants 
{
	class tree : public plant 
	{
		long int age;
	public:
		// �������������� ��������� ������
		void in_data(ifstream& ifst); // ����
		void out(ofstream& ofst); // �����
		void multimethod(plant* other, ofstream& ofst);
		void mm_tree(ofstream& ofst);
		void mm_bush(ofstream& ofst);
		void mm_flower(ofstream& ofst);
		tree() {} // �������� ��� �������������.
	};
} // end plants namespace

