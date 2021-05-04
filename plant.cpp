#include "plant_atd.h"
#include "bush_atd.h"
#include "tree_atd.h"
#include "flower_atd.h"
#include <iostream>
using namespace std;

namespace plants 
{
	void plant::out_bush(ofstream& ofst) 
	{
		ofst << endl;
	}
	// —равнение дл€ растений по количеству согласных букв
	bool plant::compare(plant& other)
	{
		return cons < other.cons;
	}
	//  оличество согласных букв
	void plant::consanants()
	{
		string vowel = "AEIOUaeiou";
		cons = 0;
		for (int i = 0; i < name.length(); i++)
		{
			if (vowel.find(name[i]) == string::npos)
			{
				cons++;
			}
		}
	}
	// ¬вод параметров обобщенной фигуры
	plant* plant::in(ifstream & ifst) 
	{
		plant* sp;
		string tmp_name;
		int k, tmp_k;
		ifst >> tmp_k;
		if (ifst.fail())
		{
			cout << "Error! Unexpected end of input!" << endl;
			exit(1);
		}

		if (tmp_k < 1 || tmp_k > 3)
		{
			cout << "Error! Type number should be value from range <1-3>!" << endl;
			exit(1);
		}
		k = tmp_k;
		switch (k) 
		{
		case 1:
			sp = new bush;
			ifst >> tmp_name;
			if (ifst.fail())
			{
				cout << "Error! Unexpected end of input!" << endl;
				exit(1);
			}
			sp->name = tmp_name;
			sp->consanants();
			break;
		case 2:
			sp = new tree;
			ifst >> tmp_name;
			if (ifst.fail())
			{
				cout << "Error! Unexpected end of input!" << endl;
				exit(1);
			}
			sp->name = tmp_name;
			sp->consanants();
			break;
		case 3:
			sp = new flower;
			ifst >> tmp_name;
			if (ifst.fail())
			{
				cout << "Error! Unexpected end of input!" << endl;
				exit(1);
			}
			sp->name = tmp_name;
			sp->consanants();
			break;
		default:
			return 0;
		}
		sp->in_data(ifst);
		return sp;
	}
} // end plants namespace
