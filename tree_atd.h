#pragma once
// ��������� �������� ������ plant
#include "plant_atd.h"
namespace plants {
	class tree : public plant {
		long int age;
	public:
		// �������������� ��������� ������
		void InData(ifstream& ifst); // ����
		void Out(ofstream& ofst); // �����
		tree() {} // �������� ��� �������������.
	};
} // end plants namespace

