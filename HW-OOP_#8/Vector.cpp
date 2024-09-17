#include "Vector.h"
#include<iostream>
#include<Windows.h>
using namespace std;

Vector::Vector()
{
	arr = nullptr;
	size = 0;
}
Vector::Vector(int s)
{
	size = s;
	arr = new int[size] {0};
}
Vector::~Vector()
{
	/*cout << "Destructor" << arr << endl;
	Sleep(3000);*/

	delete[]arr;
	size = 0;
	
}

void Vector::InputRand()
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand()%41-20; // [-20 +20]
	}
}
void Vector::Print()
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << "\n---------------------------------------------------\n";
}

int* Vector::GetArr() 
{
	return arr;
}
int Vector::GetSize() 
{
	return size;
}


void Vector::PushBack(int a)
{
	int* temp = new int[size + 1];  // содаем новый массив (тек размер +1)

	for (int i = 0; i < size; i++)
	{
		temp[i] = arr[i]; // копируем текущие значени€ старого массива в новый массив
	}
	temp[size] = a; // инициализаци€ последнего элемента параметром метода

	delete[] arr; // удаление старого массива!

	arr = temp; // перенаправл€ем указатель в объекте на новый дин. массив
	size++;

}
int Vector::PopBack()
{
	int* temp = new int[size - 1];
	for (int i = 0; i < size - 1; i++)
	{
		temp[i] = arr[i];
	}
	int el = arr[size - 1]; // достаем последний элемент старого массива ƒќ удалени€

	delete[] arr;
	arr = temp;
	size--;

	return el;
}
void Vector::PushBeg(int a)
{
	int* temp = new int[size + 1];

	for (int i = 1; i < size+1; i++)
	{
		temp[i] = arr[i-1];
	}
	temp[0] = a;

	delete[] arr;

	arr = temp;
	size++;
}
void Vector::PushIndex(int a, int index)
{
	if (index > size-1 || index < 0)
	{
		cout << "Error" << endl;
	}
	else
	{
		int* temp = new int[size + 1];

		for (int i = 0; i < index; i++)
		{
			temp[i] = arr[i];
		}
		temp[index] = a;
		for (int i = index; i < size; i++)
		{
			temp[i + 1] = arr[i];
		}

		delete[] arr;

		arr = temp;
		size++;
	}
}
int Vector::PopIndex(int index)
{
	if (index > size - 1 || index < 0)
	{
		cout << "Error" << endl;
	}
	else
	{
		int* temp = new int[size - 1];

		for (int i = 0; i < index; i++)
		{
			temp[i] = arr[i];
		}
		int el = temp[index];
		for (int i = index+1; i < size; i++)
		{
			temp[i - 1] = arr[i];
		}

		delete[] arr;

		arr = temp;
		size--;

		return el;
	}
}
int Vector::PopBeg()
{
	int* temp = new int[size - 1];
	int el = arr[0];

	for (int i = 0; i < size - 1; i++)
	{
		temp[i] = arr[i+1];
	}

	delete[] arr;
	arr = temp;
	size--;

	return el;
}

void Vector::PushArr1(int newArr[], int newSize) 
{
	int* temp = new int[size + newSize];

	for (int i = 0; i < size; i++) 
	{
		temp[i] = arr[i];
	}

	for (int i = 0; i < newSize; i++) 
	{
		temp[size + i] = newArr[i];
	}

	delete[] arr;

	arr = temp;
	size += newSize;
}
void Vector::PushArr2(Vector* arr2)
{
	int* temp = new int[size + arr2->GetSize()];

	for (int i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}

	for (int i = 0; i < arr2->GetSize(); i++)
	{
		temp[size + i] = arr2->GetArr()[i];
	}

	delete[] arr;
	arr = temp;

	size += arr2->GetSize();
}