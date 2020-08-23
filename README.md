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
#### ArrayList&lt;T&amp;* clone()
make a new object which is same as this 
동일한 객체 생성	
> Returns - a new object which is same as this 

***********
## Example : 예제
