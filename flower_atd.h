#pragma once
#include "plant_atd.h"
namespace plants {
	class flower : public plant {
		enum type { Home, Garden, Wild };
		type t;
	public:
		// �������������� ��������� ������
		void InData(ifstream& ifst); // ����
		void Out(ofstream& ofst); // �����
		flower() {} // �������� ��� �������������.
	};
} // end plants namespace
