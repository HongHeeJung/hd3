#include <iostream>

int g = 10;

class Test
{
	int value = ++g; // ���� �̷���(++g) ���� ������
					 // 0���� literal �� ����ϼ���.
public:
	Test() {}
	Test(int n) : value(n) {}

	// Test() : value(++g) {}
	// Test(int n) : value(n) {}
};
int main()
{
	Test t1;
	Test t2(5);
	std::cout << g << std::endl; // 1. 10   2. 11    3. 12 ===> 11
}