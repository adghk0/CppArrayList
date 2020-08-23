#pragma warning(disable:4996)

#include <iostream>

#include "ArrayList.h"

class Student {
public:
	int grade;
	char* name;

	Student(int grade, char* name) {
		this->grade = grade;
		this->name = name;
	}
};

void printArr(ArrayList<Student*>* arr) {
	std::cout << "[";
	for (int i = 0; i < arr->size(); i++) {
		std::cout << "(" << arr->get(i)->name << "," << arr->get(i)->grade << ")";
		if (i < arr->size() - 1)
			std::cout << ", ";
	}
	std::cout << "]" << std::endl;
}

int main() {
	char a[] = "Kim", b[] = "Lee", c[] = "Park";
	ArrayList<Student*>* array = new ArrayList<Student*>();

	array->add(new Student(1, a));
	printArr(array);

	std::cout << std::endl << "=========== array->add(new Student(2, b));" << std::endl;
	array->add(new Student(2, b));
	printArr(array);

	std::cout << std::endl << "=========== array->set(new Student(3, c), 1);" << std::endl;
	array->set(new Student(3, c), 1);
	printArr(array);

	std::cout << std::endl << "=========== array->del(0);" << std::endl;
	array->del(0);
	printArr(array);

	return 0;
}
