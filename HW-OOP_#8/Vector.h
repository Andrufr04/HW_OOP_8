#pragma once
class Vector
{
	int* arr;
	int size;
public:
	Vector();
	~Vector();


	Vector(int s);
	void InputRand(); // инициализация случ числами
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
};

/* - ЕСТЬ
Добавляем следующие методы:
Добаление 1 значения на начало массива
Добавление по индексу, индекс и значение передаем как параметр
Удаление по индексу
удаление первого элемента
Добавление массива в конец текущего массива!
*/