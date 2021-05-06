#pragma once
#include <fstream>
using namespace std;
namespace plants 
{
	//  ласс, обобщающает все имеющиес€ фигуры.
	// явл€етс€ абстрактным, обеспечива€, тем самым,
	// проверку интерфейса
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
		// иденитфикаци€, порождение и ввод фигуры из потока
		static plant* in(ifstream& ifst);
		virtual void in_data(ifstream& ifst) = 0; // ввод
		virtual void out(ofstream& ofst) = 0; // вывод
		virtual void out_bush(ofstream& ofst);
		virtual void multimethod(plant* other, ofstream& ofst) = 0;
		virtual void mm_tree(ofstream& ofst) = 0;
		virtual void mm_bush(ofstream& ofst) = 0;
		virtual void mm_flower(ofstream& ofst) = 0;
		void consanants();
		bool compare(plant& other);
	};
} // end plants namespace

