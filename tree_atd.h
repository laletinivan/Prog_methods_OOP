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
		tree() {} // �������� ��� �������������.
	};
} // end plants namespace

