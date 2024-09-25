#pragma once
class Vector
{
	int* arr;
	int size;
public:
	Vector();
	~Vector();

	Vector(const Vector& other);
	Vector& operator=(const Vector& other);

	Vector(int s);
	void InputRand(); // инициализаци€ случ числами
	void Print();// вывод на консоль
	int* GetArr();
	int GetSize();

	void PushBack(int a);
	int PopBack();

	void PushBeg(int a);
	void PushIndex(int a, int index);

	int PopIndex(int index);
	int PopBeg();

	void PushArr1(int newArr[], int newSize); // 1v
	void PushArr2(Vector* arr2);

	Vector operator-(int a);
	Vector operator+(int a);
	Vector operator+(const Vector& obj2);
	Vector operator* (int a);
	
	Vector& operator++();
	Vector operator++(int);
	Vector& operator--();
	Vector operator--(int);

	Vector& operator+=(int a);
	Vector& operator-=(int a);
	Vector& operator*=(int a);
};

/*
	* Vector obj4 = ++obj1; // obj4 = 0 1 2 3 4 5   obj1 = 0 1 2 3 4 5
	* Vector obj5 = obj1++; // obj5 = 1 2 3 4 5     obj1 = 0 1 2 3 4 5
	*  так же и декремент(obj5--, --ob5)
	* 
	* Vector obj6(3); // 1 2 3
	* obj6+=5; // 1 2 3 0 0 0 0 0
	* obj6-=5; // количество уменьшаем на 5 если тек. размер >=5,иначе ничего не делаем
	* obj6*=5; // каждый элемент умножаем на 5, возвращаем массив после изменени€

	*/






/* - ≈—“№
ƒобавл€ем следующие методы:
ƒобаление 1 значени€ на начало массива
ƒобавление по индексу, индекс и значение передаем как параметр
”даление по индексу
удаление первого элемента
ƒобавление массива в конец текущего массива!
*/