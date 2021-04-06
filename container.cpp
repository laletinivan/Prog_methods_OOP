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
	// Ввод содержимого контейнера
	void container::In(ifstream& ifst) {
		while (!ifst.eof()) {
			size++;
			elem* temp = new elem;
			temp->In(ifst);
			temp->SetNext(head);
			if (head != NULL) {
				tail->SetNext(temp);
				tail = temp;
			}
			else {
				head = tail = temp;
			};
		}
	}
	void container::Out(ofstream& ofst) {
		// Вывод содержимого контейнера
		ofst << "Container contents " << size << " elements." << endl;
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