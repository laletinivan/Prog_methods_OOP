#include "container_atd.h"
#include "plant_atd.h"
#include <fstream>
using namespace std;
namespace plants 
{
	// Инициализация контейнера
	container::container() 
	{
		head = NULL;
		tail = NULL;
		size = 0;
	}
	// Очистка контейнера от элементов
	void container::clear() 
	{
		while (size != 0) 
		{
			elem* temp = head->get_next();
			head->~elem();
			head = temp;
			size--;
		}
	}
	// Новый элемент добавить в список
	void container::push(elem* tmp) 
	{
		size++;
		if (head != NULL) 
		{
			tail->set_next(tmp);
			tail = tmp;
			tail->set_next(head);
		}
		else 
		{
			head = tail = tmp;
			head->set_next(tmp);
			tail->set_next(tmp);
		};
	}
	// Ввод содержимого контейнера
	void container::in(ifstream& ifst) 
	{
		while (!ifst.eof()) 
		{
			elem* temp = new elem;
			temp->in(ifst);
			temp->set_next(head);
			push(temp);
		}
	}
	//Удаление 1 элемента списка
	void container::delete_at(int pos) 
	{
		elem* tmp = head;
		pos = abs(pos);
		if (pos > size) 
		{
			return;
		}
		if (pos == 0) 
		{
			head = head->get_next();
			tail->set_next(head);
			size--;
			return;
		}
		if (pos == size - 1) 
		{
			int count = 0;
			while (count != size - 2) 
			{
				tmp = tmp->get_next();
			}
			tail = tmp;
		}
		for (int i = 0; i < size - 1; i++) 
		{
			if (i + 1 == pos) 
			{
				tmp->set_next(tmp->get_next()->get_next());
				size--;
			}
			tmp = tmp->get_next();
		}
	}
	void container::sort() 
	{
		int num, s;
		s = size;
		elem* i, * small;
		while (size != 0) 
		{
			small = head;
			i = small->get_next();
			num = 0;
			if (size != 1) {
				for (int a = 1; a < size; a++) 
				{
					if (i->get_data()->compare(*(small->get_data()))) 
					{
						num = a;
						small = i;
					}
					i = i->get_next();
				}
			}
			delete_at(num);
			push(small);
			size--;
		}
		size = s;
	}
	int container::get_size() 
	{ 
		return size; 
	};
	elem* container::get_head() 
	{ 
		return head; 
	};
	elem* container::get_tail() 
	{ 
		return tail; 
	};
	void container::set_size(int a) 
	{ 
		size = a; 
	};
	void container::set_head(elem* a) 
	{ 
		head = a; 
	};
	void container::set_tail(elem* a) 
	{ 
		tail = a; 
	};
	void container::out(ofstream& ofst) {
		// Вывод содержимого контейнера
		ofst << "Container contains " << size << " elements." << endl;
		elem* temp = head;
		for (int i = 0; i < size; i++) 
		{
			ofst << i << ": ";
			temp->out(ofst);
			temp = temp->get_next();
		}
	}
	void container::out_bush(ofstream& ofst) 
	{
		ofst << "Only bushes." << endl;
		elem* temp = head;
		for (int i = 0; i < size; i++) 
		{
			ofst << i << ": ";
			temp->get_data()->out_bush(ofst);
			temp = temp->get_next();
		}
	}
}