#include <iostream>

// 43 page �׸� �Ϻ��� ���� �ϼž� �մϴ�.
void inc1(int  n) { ++n; }
void inc2(int* p) { ++(*p); }
void inc3(int& r) { ++r; }

int main()
{
	int a = 10, b = 10, c = 10;

	inc1(a); // call by value ����
	inc2(&b);// call by pointer ����
	inc3(c); // call by reference �� ����

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

//	int* p = 0; // �ȴ�.
//	int& r; //  �ȵȴ�.
}

void f1(int* p)
{
	// �����Ϸ��� if �� �ʿ�
	if (p != 0)
	{
		*p = 10;
	}
}
void f2(int& r)
{
	r = 10; // if �� �ʿ����. �����ϴ�.
}
// ��� : �Լ� ���鶧 ���۷����� �޴°���
//			�����ͷ� �޴� �Ͱ� ����������
//			���� ���ϰ�, �����ϴ�.
//		    ������ ��κ�, �����͸����ε� �� ���������ϴ�.





