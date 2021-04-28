#include "container_atd.h"
#include "plant_atd.h"
#include <fstream>
using namespace std;
namespace plants {
	// Инициализация контейнера
	container::container() {
		head = NULL;
		tail = NULL;
		size = 0;
	}
	// Очистка контейнера от элементов
	void container::Clear() {
		while (size != 0) {
			elem* temp = head->GetNext();
			head->~elem();
			head = temp;
			size--;
		}
	}
	// Новый элемент добавить в список
	void container::Push(elem* tmp) {
		size++;
		if (head != NULL) {
			tail->SetNext(tmp);
			tail = tmp;
			tail->SetNext(head);
		}
		else {
			head = tail = tmp;
			head->SetNext(tmp);
			tail->SetNext(tmp);
		};
	}
	// Ввод содержимого контейнера
	void container::In(ifstream& ifst) {
		while (!ifst.eof()) {
			elem* temp = new elem;
			temp->In(ifst);
			temp->SetNext(head);
			Push(temp);
		}
	}
	//Удаление 1 элемента списка
	void container::DeleteAt(int pos) {
		elem* tmp = head;
		pos = abs(pos);
		if (pos > size) {
			return;
		}
		if (pos == 0) {
			head = head->GetNext();
			tail->SetNext(head);
			size--;
			return;
		}
		if (pos == size - 1) {
			int count = 0;
			while (count != size - 2) {
				tmp = tmp->GetNext();
			}
			tail = tmp;
		}
		for (int i = 0; i < size - 1; i++) {
			if (i + 1 == pos) {
				tmp->SetNext(tmp->GetNext()->GetNext());
				size--;
			}
			tmp = tmp->GetNext();
		}
	}
	void container::Sort() {
		int num, s;
		s = size;
		elem* i, * small;
		while (size != 0) {
			small = head;
			i = small->GetNext();
			num = 0;
			if (size != 1) {
				for (int a = 1; a < size; a++) {
					if (i->GetData()->Compare(*(small->GetData()))) {
						num = a;
						small = i;
					}
					i = i->GetNext();
				}
			}
			DeleteAt(num);
			Push(small);
			size--;
		}
		size = s;
	}
	int container::GetSize() { return size; };
	elem* container::GetHead() { return head; };
	elem* container::GetTail() { return tail; };
	void container::SetSize(int a) { size = a; };
	void container::SetHead(elem* a) { head = a; };
	void container::SetTail(elem* a) { tail = a; };
	void container::Out(ofstream& ofst) {
		// Вывод содержимого контейнера
		ofst << "Container contains " << size << " elements." << endl;
		elem* temp = head;
		for (int i = 0; i < size; i++) {
			ofst << i << ": ";
			temp->Out(ofst);
			temp = temp->GetNext();
		}
	}
	void container::OutBush(ofstream& ofst) {
		ofst << "Only bushes." << endl;
		elem* temp = head;
		for (int i = 0; i < size; i++) {
			ofst << i << ": ";
			temp->GetData()->OutBush(ofst);
			temp = temp->GetNext();
		}
	}
}