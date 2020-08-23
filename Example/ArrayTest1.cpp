#include <iostream>

#include "ArrayList.h"

void printArr(ArrayList<int>* arr) {
	std::cout << "[";
	for (int i = 0; i < arr->size(); i++) {
		std::cout << arr->get(i);
		if(i < arr->size() - 1)
			std::cout << ", ";
	}
	std::cout << "]" << std::endl;
}

int main() {
	ArrayList<int>* array = new ArrayList<int>();

	array->add(10);
	array->add(20);
	array->add(30);
	array->add(40);
	array->add(50);
	array->add(60);
	array->add(70);
	printArr(array);

	std::cout << std::endl << "=========== array->add(15, 1);" << std::endl;
	array->add(15, 1);
	printArr(array);

	std::cout << std::endl << "=========== array->add(80);" << std::endl;
	array->add(80);
	printArr(array);

	std::cout << std::endl << "=========== array->del(2);" << std::endl;
	array->del(2);
	printArr(array);

	std::cout << std::endl << "=========== array->delFirst();" << std::endl;
	array->delFirst();
	printArr(array);

	std::cout << std::endl << "=========== array->delLast();" << std::endl;
	array->delLast();
	printArr(array);
	
	std::cout << std::endl << "=========== array->set(25, 1);" << std::endl;
	array->set(25, 1);
	printArr(array);

	return 0;
}