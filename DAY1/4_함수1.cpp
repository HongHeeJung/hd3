// 4_�Լ�1
// C�� �ٸ� C++ �Լ��� Ư¡ 1. ����Ʈ ���� 28page
#include <iostream>
// default parameter
// 
// ���� ���� 1. �Լ��� ����� �������� �и��Ҷ��� �ݵ�� ���𿡸� ǥ���ؾ� �Ѵ�.
void foo(int a, int b = 0, int c = 0);

int main()
{
	foo(1, 2, 3);
	foo(1, 2);    // 1, 2, 0
	foo(1);		  // 1, 0, 0 
}

void foo(int a, int b /*= 0*/, int c /*= 0*/ )
{
	std::cout << a << ", " << b << ", " << c << std::endl;
}

// ���� ���� 2. ������ ���ں��� ���ʴ�θ� �����Ҽ� �ִ�.
void f1(int a,     int b = 0, int c);     // error
void f2(int a = 0, int b,     int c = 0); // error