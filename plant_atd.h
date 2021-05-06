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
		virtual void multimethod(plant* other, ofstream& ofst) = 0;
		virtual void mm_tree(ofstream& ofst) = 0;
		virtual void mm_bush(ofstream& ofst) = 0;
		virtual void mm_flower(ofstream& ofst) = 0;
		void consanants();
		bool compare(plant& other);
	};
} // end plants namespace

