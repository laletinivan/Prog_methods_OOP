#pragma once
#include <fstream>
using namespace std;
namespace plants 
{
	// �����, ����������� ��� ��������� ������.
	// �������� �����������, �����������, ��� �����,
	// �������� ����������
	class plant 
	{
	public:
		string name;
		int cons;
		enum place_of_growth 
		{ 
			TUNDRA, TAIGA, FOREST, STEPPE, JUNGLE 
		};
		place_of_growth pog;
		// �������������, ���������� � ���� ������ �� ������
		static plant* in(ifstream& ifst);
		virtual void in_data(ifstream& ifst) = 0; // ����
		virtual void out(ofstream& ofst) = 0; // �����
		virtual void out_bush(ofstream& ofst);
		void consanants();
		bool compare(plant& other);
	};
} // end plants namespace

