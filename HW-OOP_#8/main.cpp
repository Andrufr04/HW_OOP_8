#include<iostream>
#include"Vector.h"
using namespace std;


Vector& operator+=(Vector& vec, int a)
{
	if (a <= 0) 
	{
		return vec;
	}

	int size = vec.GetSize();
	int* arr = vec.GetArr();

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

	vec.SetArr(temp);
	vec.SetSize(size + a);

	return vec;
}
Vector& operator-=(Vector& vec, int a) 
{
	if (a <= 0) 
	{
		return vec;
	}

	int size = vec.GetSize();
	int* arr = vec.GetArr();

	if (size >= a) 
	{
		int* temp = new int[size - a];

		for (int i = 0; i < size - a; i++) 
		{
			temp[i] = arr[i];
		}

		delete[] arr;

		vec.SetArr(temp);
		vec.SetSize(size - a);
	}

	return vec;
}
Vector& operator*=(Vector& vec, int a)
{
	int size = vec.GetSize();
	int* arr = vec.GetArr();

	for (int i = 0; i < size; i++)
	{
		arr[i] *= a;
	}

	return vec;
}
Vector operator-(int n, Vector& vec)
{
	int size = vec.GetSize();
	int* arr = vec.GetArr();

	if (n >= size) 
	{
		return Vector(0);
	}

	int newSize = size - n;

	Vector result(newSize);

	for (int i = 0; i < newSize; i++) 
	{
		result.GetArr()[i] = arr[n + i];
	}

	return result;
}

ostream& operator<<(ostream& os, Vector& vec) 
{
	for (int i = 0; i < vec.GetSize(); i++) 
	{
		os << vec.GetArr()[i] << "\t";
	}
	return os;
}
istream& operator>>(istream& is, Vector& vec) 
{
	for (int i = 0; i < vec.GetSize(); i++) 
	{
		cout << "el[" << i << "]: ";
		is >> vec.GetArr()[i];
	}
	return is;
}

int main()
{
	srand(time(0));

	Vector a = { 1,2,3,4,13,6,7 };
	cout << a;


	/*Vector c(3);
	cin >> c;
	cout << c;*/


	//Vector obj(10);
	//obj.InputRand();
	//obj.Print();

	//Vector c = 5 - obj;
	////c.Print();
	//cout << c;

	/*Vector vec(3);
	vec.InputRand();
	vec.Print();

	vec *= 2;
	vec.Print();*/


	/*Vector obj1(5);
	obj1.InputRand(); 
	obj1.Print();

	obj1 += 3;
	obj1.Print();

	obj1 -= 2;
	obj1.Print();

	obj1 *= 5;
	obj1.Print();

	return 0;*/

	/*Vector obj1(5);
	obj1.InputRand();
	obj1.Print();

	Vector obj4 = ++obj1;
	obj1.Print();
	obj4.Print();

	Vector obj5 = obj1++;
	obj1.Print();
	obj5.Print();*/



	//cout << "Add 0 el: " << endl;
	//Vector obj1(5);
	//obj1.InputRand();
	//obj1.Print();

	//Vector obj2 = obj1 + 5; // 1 2 3 4 5 0 0 0 0 
	//obj2.Print();

	//cout << "Add arr: " << endl;
 //   Vector obj4(2);// 10 20
	//obj4.InputRand();
	//obj4.Print();
 //   Vector obj5 = obj1 + obj4; // 1 2 3 4 5 10 20 
	//obj5.Print();

	//cout << "Mul: " << endl;
	//Vector obj6 = obj1 * 3;
	//obj6.Print();


	/*Vector obj1(5);
	obj1.InputRand();
	obj1.Print();

	Vector obj2(3);
	obj2.InputRand();
	obj2.Print();

	obj1.PushArr2(&obj2);
	obj1.Print();*/

	/*srand(time(0));

	Vector obj1(5);
	obj1.InputRand();
	obj1.Print();

	Vector obj2(2);
	obj2.InputRand();
	obj2.Print();

	obj1.PushArr1(obj2.GetArr(), obj2.GetSize());
	obj1.Print();*/


	/*srand(time(0));
	Vector obj1(5);
	obj1.InputRand();
	obj1.Print();

	obj1.PopBeg();
	obj1.PopBeg();
	obj1.Print();*/

	/*srand(time(0));
	Vector obj1(5);
	obj1.InputRand();
	obj1.Print();

	obj1.PopIndex(2);
	obj1.Print();*/

	/*srand(time(0));
	Vector obj1(5);
	obj1.InputRand();
	obj1.Print();

	obj1.PushIndex(1000, 2);
	obj1.Print();*/

	/*srand(time(0));
	Vector obj1(5);
	obj1.InputRand();
	obj1.Print();

	obj1.PushBeg(100);
	obj1.Print();*/


	/*srand(time(0));
	Vector obj1(5);
	obj1.InputRand();
	obj1.Print();

	obj1.PushBack(100);
	obj1.Print();
	obj1.PushBack(200);
	obj1.Print();

	int last = obj1.PopBack();
	obj1.Print();
	cout << "Last = " << last << endl;
	last = obj1.PopBack();
	obj1.Print();
	cout << "Last = " << last << endl;*/




}