#include<iostream>
#include"Vector.h"
using namespace std;

int main()
{
	srand(time(0));

	cout << "Add 0 el: " << endl;
	Vector obj1(5);
	obj1.InputRand();
	obj1.Print();

	Vector obj2 = obj1 + 5; // 1 2 3 4 5 0 0 0 0 
	obj2.Print();

	cout << "Add arr: " << endl;
    Vector obj4(2);// 10 20
	obj4.InputRand();
	obj4.Print();
    Vector obj5 = obj1 + obj4; // 1 2 3 4 5 10 20 
	obj5.Print();

	cout << "Mul: " << endl;
	Vector obj6 = obj1 * 3;
	obj6.Print();


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