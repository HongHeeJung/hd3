#include <iostream>

int g = 0;

//int x[100000] = { 1, 2, 3 }; // .data
  
int x[100000]; // �ʱⰪ ���� ������.

int main()
{
	x[0] = 10;

	int n = 0;
	int* p = new int;
	const char* s = "Hello"; // s�� ��� �޸𸮿� ���� "Hello"�� ����ŵ�ϴ�.

	printf("�������� �ּ� : %p\n", &g);
	printf("�������� �ּ� : %p\n", &n);
	printf("�����Ҵ� �޸� �ּ� : %p\n", p); // &p �ƴմϴ�.
	printf("main �Լ��ּ� : %p\n", &main);
	printf("����޸� ���ڿ��ּ� : %p\n", s);

	delete p;
}
// PEView ���� �������� �����ִ°� ��������.
// ������ ��� Ȯ���� ������

// Release build �ϼ���.. => Ž���⿡�� �������� ũ�� Ȯ���� ������
//	DAY3/Release/Day3.exe - 11k 						