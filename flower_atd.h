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
		flower() {} // �������� ��� �������������.
	};
} // end plants namespace
