#include "pch.h"
#include "CppUnitTest.h"
#include <iostream>
#include <fstream>
#include <string>
#include "../container.cpp"
#include "../plant.cpp"
#include "../tree.cpp"
#include "../flower.cpp"
#include "../bush.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace plants;
using namespace std;

namespace OOPUnitTest
{
    TEST_CLASS(OOPUnitTest)
    {
    public:

        TEST_METHOD(tree_io)
        {
            ifstream ifst("D:\\VS2019projects\\OOP\\OOPUnitTest\\test\\test_io\\tree_io\\input_tree.txt");
            if (!ifst.is_open())
            {
                Logger::WriteMessage("input file is not open!");
            }
            ofstream ofst("D:\\VS2019projects\\OOP\\OOPUnitTest\\test\\test_io\\tree_io\\output_tree.txt");
            if (!ofst.is_open())
            {
                Logger::WriteMessage("output file is not open!");
            }

            tree t;
            t.name = "topol";
            t.cons = 3;
            t.in_data(ifst);
            t.out(ofst);
            ifst.close();
            ofst.close();

            string one, two, tmp;

            ifstream ifst1("D:\\VS2019projects\\OOP\\OOPUnitTest\\test\\test_io\\tree_io\\example_tree.txt");
            ifstream ifst2("D:\\VS2019projects\\OOP\\OOPUnitTest\\test\\test_io\\tree_io\\output_tree.txt");

            while (!ifst1.eof()) 
            {
                getline(ifst1, tmp);
                one += tmp;
            }

            while (!ifst2.eof()) 
            {
                getline(ifst2, tmp);
                two += tmp;
            }

            Assert::AreEqual(one, two);

            ifst1.close();
            ifst2.close();
        }
        TEST_METHOD(bush_io)
        {
            ifstream ifst("D:\\VS2019projects\\OOP\\OOPUnitTest\\test\\test_io\\bush_io\\input_bush.txt");
            if (!ifst.is_open())
            {
                Logger::WriteMessage("input file is not open!");
            }
            ofstream ofst("D:\\VS2019projects\\OOP\\OOPUnitTest\\test\\test_io\\bush_io\\output_bush.txt");
            if (!ofst.is_open())
            {
                Logger::WriteMessage("output file is not open!");
            }

            bush t;
            t.name = "mozevelnik";
            t.cons = 6;
            t.in_data(ifst);
            t.out(ofst);
            ifst.close();
            ofst.close();

            string one, two, tmp;

            ifstream ifst1("D:\\VS2019projects\\OOP\\OOPUnitTest\\test\\test_io\\bush_io\\example_bush.txt");
            ifstream ifst2("D:\\VS2019projects\\OOP\\OOPUnitTest\\test\\test_io\\bush_io\\output_bush.txt");

            while (!ifst1.eof()) 
            {
                getline(ifst1, tmp);
                one += tmp;
            }

            while (!ifst2.eof()) 
            {
                getline(ifst2, tmp);
                two += tmp;
            }

            Assert::AreEqual(one, two);

            ifst1.close();
            ifst2.close();
        }
        TEST_METHOD(flower_io)
        {
            ifstream ifst("D:\\VS2019projects\\OOP\\OOPUnitTest\\test\\test_io\\flower_io\\input_flower.txt");
            if (!ifst.is_open())
            {
                Logger::WriteMessage("input file is not open!");
            }
            ofstream ofst("D:\\VS2019projects\\OOP\\OOPUnitTest\\test\\test_io\\flower_io\\output_flower.txt");
            if (!ofst.is_open())
            {
                Logger::WriteMessage("output file is not open!");
            }

            flower t;
            t.name = "fialka";
            t.cons = 3;
            t.in_data(ifst);
            t.out(ofst);
            ifst.close();
            ofst.close();

            string one, two, tmp;

            ifstream ifst1("D:\\VS2019projects\\OOP\\OOPUnitTest\\test\\test_io\\flower_io\\example_flower.txt");
            ifstream ifst2("D:\\VS2019projects\\OOP\\OOPUnitTest\\test\\test_io\\flower_io\\output_flower.txt");

            while (!ifst1.eof()) 
            {
                getline(ifst1, tmp);
                one += tmp;
            }

            while (!ifst2.eof())
            {
                getline(ifst2, tmp);
                two += tmp;
            }

            Assert::AreEqual(one, two);

            ifst1.close();
            ifst2.close();
        }
        TEST_METHOD(plant_io)
        {
            ifstream ifst1("D:\\VS2019projects\\OOP\\OOPUnitTest\\test\\test_io\\plant_io\\input_bush.txt");
            ifstream ifst2("D:\\VS2019projects\\OOP\\OOPUnitTest\\test\\test_io\\plant_io\\input_flower.txt");
            ifstream ifst3("D:\\VS2019projects\\OOP\\OOPUnitTest\\test\\test_io\\plant_io\\input_tree.txt");
            if (!ifst1.is_open() || !ifst2.is_open() || !ifst3.is_open())
            {
                Logger::WriteMessage("input files are not open!");
            }

            ofstream ofst1("D:\\VS2019projects\\OOP\\OOPUnitTest\\test\\test_io\\plant_io\\output_bush.txt");
            ofstream ofst2("D:\\VS2019projects\\OOP\\OOPUnitTest\\test\\test_io\\plant_io\\output_flower.txt");
            ofstream ofst3("D:\\VS2019projects\\OOP\\OOPUnitTest\\test\\test_io\\plant_io\\output_tree.txt");
            if (!ofst1.is_open() || !ofst2.is_open() || !ofst3.is_open())
            {
                Logger::WriteMessage("output files are not open!");
            }

            plant* p1 = p1->in(ifst1);
            plant* p2 = p2->in(ifst2);
            plant* p3 = p3->in(ifst3);
            p1->out(ofst1);
            p2->out(ofst2);
            p3->out(ofst3);
            ifst1.close();
            ifst2.close();
            ifst3.close();
            ofst1.close();
            ofst2.close();
            ofst3.close();

            ifstream if1("D:\\VS2019projects\\OOP\\OOPUnitTest\\test\\test_io\\plant_io\\output_bush.txt");
            ifstream if2("D:\\VS2019projects\\OOP\\OOPUnitTest\\test\\test_io\\plant_io\\output_flower.txt");
            ifstream if3("D:\\VS2019projects\\OOP\\OOPUnitTest\\test\\test_io\\plant_io\\output_tree.txt");

            string s1, s2, s3, s4, s5, s6, tmp;

            ifstream if4("D:\\VS2019projects\\OOP\\OOPUnitTest\\test\\test_io\\plant_io\\example_bush.txt");
            ifstream if5("D:\\VS2019projects\\OOP\\OOPUnitTest\\test\\test_io\\plant_io\\example_flower.txt");
            ifstream if6("D:\\VS2019projects\\OOP\\OOPUnitTest\\test\\test_io\\plant_io\\example_tree.txt");

            while (!if1.eof()) 
            {
                getline(if1, tmp);
                s1 += tmp;
            }
            while (!if2.eof()) 
            {
                getline(if2, tmp);
                s2 += tmp;
            }
            while (!if3.eof()) 
            {
                getline(if3, tmp);
                s3 += tmp;
            }
            while (!if4.eof()) 
            {
                getline(if4, tmp);
                s4 += tmp;
            }
            while (!if5.eof()) 
            {
                getline(if5, tmp);
                s5 += tmp;
            }
            while (!if6.eof()) 
            {
                getline(if6, tmp);
                s6 += tmp;
            }

            Assert::AreEqual(s1, s4);
            Assert::AreEqual(s2, s5);
            Assert::AreEqual(s3, s6);

            if1.close();
            if2.close();
            if3.close();
            if4.close();
            if5.close();
            if6.close();
        }
        TEST_METHOD(cons)
        {
            plant *p = new tree;

            p->name = "dub";
            p->consanants();
            Assert::AreEqual(p->cons, 2);
            p->name = "db";
            p->consanants();
            Assert::AreEqual(p->cons, 2);
            p->name = "aaa";
            p->consanants();
            Assert::AreEqual(p->cons, 0);
            p->name = "kust";
            p->consanants();
            Assert::AreEqual(p->cons, 3);
            p->name = "kkust";
            p->consanants();
            Assert::AreEqual(p->cons, 4);
            p->name = "uuu";
            p->consanants();
            Assert::AreEqual(p->cons, 0);

        }
        TEST_METHOD(plant_cmp)
        {
            plant* p1 = new bush;
            plant* p2 = new tree;
            p1->cons = 1;
            p2->cons = 2;
            Assert::AreEqual(p1->compare(*p2), true);
            p1->cons = 2;
            p2->cons = 1;
            Assert::AreEqual(p1->compare(*p2), false);
            p1->cons = 0;
            p2->cons = 0;
            Assert::AreEqual(p1->compare(*p2), false);
            p1->cons = -2;
            p2->cons = 2;
            Assert::AreEqual(p1->compare(*p2), true);

        }
        TEST_METHOD(only_bush_out)
        {
            ifstream ifst("D:\\VS2019projects\\OOP\\OOPUnitTest\\test\\test_only_bush_out\\only_bush_input.txt");
            if (!ifst.is_open())
            {
                Logger::WriteMessage("input file is not open!");
            }
            ofstream ofst("D:\\VS2019projects\\OOP\\OOPUnitTest\\test\\test_only_bush_out\\only_bush_output.txt");
            if (!ofst.is_open())
            {
                Logger::WriteMessage("output file is not open!");
            }

            container c;
            c.in(ifst);
            c.out_bush(ofst);
            ifst.close();
            ofst.close();

            string one, two, tmp;

            ifstream ifst1("D:\\VS2019projects\\OOP\\OOPUnitTest\\test\\test_only_bush_out\\only_bush_example.txt");
            ifstream ifst2("D:\\VS2019projects\\OOP\\OOPUnitTest\\test\\test_only_bush_out\\only_bush_output.txt");

            while (!ifst1.eof())
            {
                getline(ifst1, tmp);
                one += tmp;
            }

            while (!ifst2.eof())
            {
                getline(ifst2, tmp);
                two += tmp;
            }

            Assert::AreEqual(one, two);

            ifst1.close();
            ifst2.close();
        }
        TEST_METHOD(container_sort)
        {
            ifstream ifst("D:\\VS2019projects\\OOP\\OOPUnitTest\\test\\test_sort\\sort_input.txt");
            if (!ifst.is_open())
            {
                Logger::WriteMessage("input file is not open!");
            }
            ofstream ofst("D:\\VS2019projects\\OOP\\OOPUnitTest\\test\\test_sort\\sort_output.txt");
            if (!ofst.is_open())
            {
                Logger::WriteMessage("output file is not open!");
            }

            container c;
            c.in(ifst);
            c.sort();
            c.out(ofst);
            ifst.close();
            ofst.close();

            string one, two, tmp;

            ifstream ifst1("D:\\VS2019projects\\OOP\\OOPUnitTest\\test\\test_sort\\sort_example.txt");
            ifstream ifst2("D:\\VS2019projects\\OOP\\OOPUnitTest\\test\\test_sort\\sort_output.txt");

            while (!ifst1.eof())
            {
                getline(ifst1, tmp);
                one += tmp;
            }

            while (!ifst2.eof()) 
            {
                getline(ifst2, tmp);
                two += tmp;
            }

            Assert::AreEqual(one, two);

            ifst1.close();
            ifst2.close();
        }
        TEST_METHOD(push_del_elem)
        {
            container c;
            elem* e1 = new elem;
            elem* e2 = new elem;
            elem* e3 = new elem;

            c.push(e1);

            string head, tail, tmp;
            ostringstream oss;

            oss << e1;
            tmp = oss.str();

            oss.str("");
            oss << c.get_head();
            head = oss.str();

            oss.str("");
            oss << c.get_tail();
            tail = oss.str();

            Assert::AreEqual(c.get_size(), 1);
            Assert::AreEqual(tmp, head);
            Assert::AreEqual(tmp, tail);

            c.push(e2);

            Assert::AreEqual(c.get_size(), 2);
            Assert::AreEqual(tmp, head);

            oss.str("");
            oss << e2;
            tmp = oss.str();

            oss.str("");
            oss << c.get_tail();
            tail = oss.str();

            Assert::AreEqual(tmp, tail);

            c.push(e3);

            Assert::AreEqual(c.get_size(), 3);

            c.delete_at(0);

            Assert::AreEqual(c.get_size(), 2);

            oss.str("");
            oss << c.get_head();
            head = oss.str();

            Assert::AreEqual(tmp, head);

            c.delete_at(3);

            Assert::AreEqual(c.get_size(), 2);

            c.delete_at(1);

            Assert::AreEqual(c.get_size(), 1);

            oss.str("");
            oss << c.get_tail();
            tail = oss.str();

            Assert::AreEqual(tmp, tail);
        }
    };
}

