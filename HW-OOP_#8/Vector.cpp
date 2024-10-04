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

Vector::Vector(initializer_list<int> a) 
{
	size = a.size();
	arr = new int[size];
	int i = 0;
	for (auto x = a.begin(); x != a.end(); ++x) 
	{
		arr[i++] = *x;
	}
}

Vector::Vector(const Vector& other) 
{
	size = other.size;
	arr = new int[size];
	for (int i = 0; i < size; i++) 
	{
		arr[i] = other.arr[i];
	}
}
Vector& Vector::operator=(const Vector& other)
{
	if (this != &other)
	{
		delete[] arr;
		size = other.size;
		arr = new int[size];
		for (int i = 0; i < size; i++) {
			arr[i] = other.arr[i];
		}
	}
	return *this;
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

void Vector::SetArr(int* newArr) 
{
	arr = newArr;
}
void Vector::SetSize(int newSize) 
{
	size = newSize;
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
		return -1; 
	}
	else
	{
		int* temp = new int[size - 1];

		for (int i = 0; i < index; i++)
		{
			temp[i] = arr[i];
		}
		int el = arr[index]; 
		for (int i = index + 1; i < size; i++)
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

Vector Vector::operator-(int a)
{
	Vector rez(size - a);
	for (int i = 0; i < rez.size; i++)
	{
		rez.arr[i] = this->arr[i];
	}
	return rez;
}
Vector Vector::operator+(int a)
{
	Vector rez(size + a);
	for (int i = 0; i < rez.size; i++)
	{
		if (i >= this->size)
		{
			rez.arr[i] = 0;
		}
		else
		{
			rez.arr[i] = this->arr[i];
		}
	}
	return rez;
}
Vector Vector::operator+(const Vector& obj2)
{
	Vector rez(size + obj2.size);

	for (int i = 0; i < size; i++)
	{
		rez.arr[i] = arr[i];
	}

	for (int i = 0; i < obj2.size; i++)
	{
		rez.arr[size + i] = obj2.arr[i];
	}

	return rez;
}
Vector Vector::operator*(int a)
{
	Vector rez(size);
	for (int i = 0; i < size; i++)
	{
		rez.arr[i] = this->arr[i] * a;
	}
	return rez;
}

Vector& Vector::operator++() 
{
	PushBeg(0);
	return *this;
}
Vector Vector::operator++(int) 
{
	Vector temp = *this;
	PushBeg(0);
	return temp;
}
Vector& Vector::operator--() 
{
	PopIndex(0);
	return *this;
}
Vector Vector::operator--(int) 
{
	Vector temp = *this;
	PopIndex(0);
	return temp;
}

/*Vector& Vector::operator+=(int a) 
{
	int* temp = new int[size + a];

	for (int i = 0; i < size; i++) 
	{
		temp[i] = arr[i];
	}

	for (int i = size; i < size + a; i++) 
	{
		temp[i] = 0;
	}

	delete[] arr;

	arr = temp;
	size += a;

	return *this;
}
Vector& Vector::operator-=(int a) 
{
	if (size >= a) 
	{
		int* temp = new int[size - a];
		for (int i = 0; i < size - a; i++) 
		{
			temp[i] = arr[i];
		}

		delete[] arr;

		arr = temp;
		size -= a;
	}

	return *this;
}
Vector& Vector::operator*=(int a) 
{
	for (int i = 0; i < size; i++) 
	{
		arr[i] *= a;
	}

	return *this;
}*/
