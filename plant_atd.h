#pragma once
#include <fstream>
using namespace std;
namespace plants {
	//  ласс, обобщающает все имеющиес€ фигуры.
	// явл€етс€ абстрактным, обеспечива€, тем самым,
	// проверку интерфейса
	class plant {
	public:
		string name;
		// иденитфикаци€, порождение и ввод фигуры из потока
		static plant* In(ifstream& ifst);
		virtual void InData(ifstream& ifst) = 0; // ввод
		virtual void Out(ofstream& ofst) = 0; // вывод
	};
} // end plants namespace

