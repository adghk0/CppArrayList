#include <iostream>

#include "ArrayList.h"

void printArr(ArrayList<int>* arr) {
	if (arr == NULL) {
		std::cout << "null" << std::endl;
		return;
	}

	std::cout << "[";
	for (int i = 0; i < arr->size(); i++) {
		std::cout << arr->get(i);
		if (i < arr->size() - 1)
			std::cout << ", ";
	}
	std::cout << "]" << std::endl;
}

int main() {
	ArrayList<int> * a, * b = NULL;
	a = new ArrayList<int>();
	
	a->add(10);
	a->add(20);

	std::cout << "a: ";
	printArr(a);
	std::cout << "b: ";
	printArr(b);


	std::cout << std::endl << "=========== b = a->clone();" << std::endl;
	b = a->clone();
	std::cout << "a: ";
	printArr(a);
	std::cout << "b: ";
	printArr(b);


	std::cout << std::endl << "=========== b->delFirst();" << std::endl;
	b->delFirst();
	std::cout << "a: ";
	printArr(a);
	std::cout << "b: ";
	printArr(b);
}