# CppArrayList
 This source code is ArrayList class code in c++.    
 이 소스코드는 C++ 동적 배열 클래스입니다.

## ArrayList : 동적 배열
``` C++
template<typename T>
class ArrayList
```
 ArrayList can add and delete datas with method. the size of array is not fixed. It can be changed anytime.   
 ArrayList는 메소드를 사용하여 데이터를 추가하거나 삭제할 수 있습니다. 배열의 크기는 고정되지 않고 언제든지 바뀔 수 있습니다.

***********
### Field : 멤버 변수
``` C++
private:
	T* array;
	int length;
```
-----------
#### array
 array is the variable of data.    
 array는 데이터 변수입니다.
 
-----------
#### length
 length is the length of array.    
 length는 배열의 길이입니다.
 
***********
### Method : 메소드
``` C++
public:
	ArrayList();
	~ArrayList();
  
	int size();

	T* get();
	T get(int index);
	bool add(T data);
	bool add(T data, int index);
	bool set(T data, int index);
	bool del(int index);

	T getFirst();
	T getLast();
	bool delFirst();
	bool delLast();

	ArrayList<T>* clone();
```
-----------
#### ArrayList()
Constructor : 생성자

-----------
#### ~ArrayList()
Destructor : 소멸자

-----------
#### int size()
return the size of array    
배열 크기 반환   
###### Returns - the size of array

-----------
#### T* get()
get all array    
전체 값 가져오기    
> Returns - the data of array

-----------
#### T get(int index)
get value at index    
다음 위치의 값 가져오기     
> Returns - the value at index

-----------
#### bool add(T data)
add data at the end    
맨 뒤에 값 추가    
> Returns - the success or failure of the adding
> Parameter - data: a adding data

-----------
#### bool add(T data, int index)
add data at index    
다음 위치에 값 추가    
> Returns - the success or failure of the adding
> Parameter - data: a adding data, index: a index of array

-----------
#### bool set(T data, int index)
set data at index    
다음 위치 값 변경    
> Returns - the success or failure of the setting
> Parameter - data: a setting data, index: a index of array

-----------
#### bool del(int index)
delete data at index     
다음 위치 값 제거     
> Returns - the success or failure of the deletion
> Parameter - data: a deleting data, index: a index of array

-----------
#### T getFirst()
get the first data    
맨 처음 값 가져오기    
> Returns - the data at the first position

-----------
#### T getLast()
get the last data    
맨 마지막 값 가져오기    
> Returns - the data at the last position

-----------
#### bool delFirst()
delete the first data    
맨 처음 값 제거    
> Returns - the success or failure of the deletion

-----------
#### bool delLast()
delete last data    
맨 마지막 값 제거    
> Returns - the success or failure of the deletion

-----------
#### ArrayList&lt;T&gt;&#42; clone()
make a new object which is same as this     
동일한 객체 생성    	
> Returns - a new object which is same as this 

***********
## Example : 예제
### Example1
``` C++
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
```
``` BASH
[10, 20, 30, 40, 50, 60, 70]

=========== array->add(15, 1);
[10, 15, 20, 30, 40, 50, 60, 70]

=========== array->add(80);
[10, 15, 20, 30, 40, 50, 60, 70, 80]

=========== array->del(2);
[10, 15, 30, 40, 50, 60, 70, 80]

=========== array->delFirst();
[15, 30, 40, 50, 60, 70, 80]

=========== array->delLast();
[15, 30, 40, 50, 60, 70]

=========== array->set(25, 1);
[15, 25, 40, 50, 60, 70]
```
This code is the simple example about ArrayList.    
다음 코드는 간단한 ArrayList 예제 입니다.    
    
``` C++
void printArr(ArrayList<int>* arr) {
	std::cout << "[";
	for (int i = 0; i < arr->size(); i++) {
		std::cout << arr->get(i);
		if(i < arr->size() - 1)
			std::cout << ", ";
	}
	std::cout << "]" << std::endl;
}
```
this function prints int ArrayList.   
이 함수는 ArrayList를 출력합니다.   

-------------
### Example2
``` C++
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
```
``` BASH
[(Kim,1)]

=========== array->add(new Student(2, b));
[(Kim,1), (Lee,2)]

=========== array->set(new Student(3, c), 1);
[(Kim,1), (Park,3)]

=========== array->del(0);
[(Park,3)]
```
This code shows how to use ArrayList with user-defined class.    
이 코드는 어떻게 사용자 정의 클래스로 ArrayList를 사용하는지 보여줍니다.    

-------------
### Example3
``` C++
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
```
``` BASH
a: [10, 20]
b: null

=========== b = a->clone();
a: [10, 20]
b: [10, 20]

=========== b->delFirst();
a: [10, 20]
b: [20]
```
This code shows how to use clone() method. Clone object can be different from origin object.   
이 코드는 clone() 메소드의 사용법을 보여줍니다. 복사된 객체는 원래의 객체와 달라질 수 있습니다.    
