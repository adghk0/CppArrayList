# CppArrayList
 This source code is ArrayList class code in c++.
 이 소스코드는 C++ 동적 배열 클래스입니다.

## ArrayList : 동적 배열
 ArrayList can add and delete datas with method. the size of array is not fixed. It can be changed anytime.
 ArrayList는 메소드를 사용하여 데이터를 추가하거나 삭제할 수 있습니다. 배열의 크기는 고정되지 않고 언제든지 바뀔 수 있습니다.
### Field : 멤버 변수
``` C++
private:
	T* array;
	int length;
```
#### array
 array is the variable of data.
 array는 데이터 변수입니다.
 
#### length
 length is the length of array.
 length는 배열의 길이입니다.
 
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

## Example : 예쩨
