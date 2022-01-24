// 6_레퍼런스1 - 41 page
#include <iostream>

int main()
{
	int n = 10;

	int* p = &n;
	int& r = n;

	r = 20;

	std::cout << n << std::endl;
	std::cout << &n << std::endl;
	std::cout << &r << std::endl;

//	int& r1; // error. 레퍼런스(참조)는 반드시 초기화 되어야 한다.
}