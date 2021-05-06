#pragma once
// ��������� �������� ������ plant
#include "plant_atd.h"
namespace plants {
	class bush : public plant 
	{
		enum flowering_month 
		{ 
			JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC 
		};
		flowering_month m;
	public:
		// �������������� ��������� ������
		void in_data(ifstream& ifst); // ����
		void out(ofstream& ofst); // �����
		void out_bush(ofstream& ofst);
		void multimethod(plant* other, ofstream& ofst);
		void mm_tree(ofstream& ofst);
		void mm_bush(ofstream& ofst);
		void mm_flower(ofstream& ofst);
		bush() {} // �������� ��� �������������.
	};
} // end plants namespace

