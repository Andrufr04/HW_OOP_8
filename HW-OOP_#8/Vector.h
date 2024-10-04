#pragma once
#include <initializer_list>

class Vector
{
    int* arr;
    int size;
public:
    Vector();
    ~Vector();

    Vector(std::initializer_list<int> initList);

    Vector(const Vector& other);
    Vector& operator=(const Vector& other);

    Vector(int s);
    void InputRand(); // инициализация случайными числами
    void Print();     // вывод на консоль

    int* GetArr();
    int GetSize();
    void SetArr(int* newArr);
    void SetSize(int newSize);

    void PushBack(int a);
    int PopBack();

    void PushBeg(int a);
    void PushIndex(int a, int index);

    int PopIndex(int index);
    int PopBeg();

    void PushArr1(int newArr[], int newSize);
    void PushArr2(Vector* arr2);

    Vector operator-(int a);
    Vector operator+(int a);
    Vector operator+(const Vector& obj2);
    Vector operator*(int a);

    Vector& operator++();
    Vector operator++(int);
    Vector& operator--();
    Vector operator--(int);
};