#include <iostream>

// OOP : ��ü���� ���α׷���(Object Oriented Programming)
// 1. Ÿ���� ���� ���� �ض�!!

// Ÿ�Կ��� "Rect", "Point", "Person" ���� �͸� �ִ� ���� �ƴմϴ�
// "�����迭" �̶�� Ÿ���� ������ ���ô�
class Vector
{
	int* buff;
	int  size;
public:
	Vector(int sz) : size(sz)
	{
		buff = new int[size];
	}
};
int main()
{
	Vector v(5);
}



