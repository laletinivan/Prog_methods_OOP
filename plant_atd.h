#pragma once
#include <fstream>
using namespace std;
namespace plants {
	// �����, ����������� ��� ��������� ������.
	// �������� �����������, �����������, ��� �����,
	// �������� ����������
	class plant {
	public:
		string name;
		// �������������, ���������� � ���� ������ �� ������
		static plant* In(ifstream& ifst);
		virtual void InData(ifstream& ifst) = 0; // ����
		virtual void Out(ofstream& ofst) = 0; // �����
		virtual void OutBush(ofstream& ofst);
	};
} // end plants namespace

