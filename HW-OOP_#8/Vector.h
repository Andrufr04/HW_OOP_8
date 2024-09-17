#pragma once
class Vector
{
	int* arr;
	int size;
public:
	Vector();
	~Vector();


	Vector(int s);
	void InputRand(); // ������������� ���� �������
	void Print();// ����� �� �������
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

};

/*
��������� ��������� ������:
��������� 1 �������� �� ������ �������
���������� �� �������, ������ � �������� �������� ��� ��������
�������� �� �������
�������� ������� ��������
���������� ������� � ����� �������� �������!
*/