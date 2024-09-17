#include<iostream>
#include"Vector.h"
using namespace std;

int main()
{
	srand(time(0));

	Vector obj1(5);
	obj1.InputRand();
	obj1.Print();

	Vector obj2(3);
	obj2.InputRand();
	obj2.Print();

	obj1.PushArr2(&obj2);
	obj1.Print();



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