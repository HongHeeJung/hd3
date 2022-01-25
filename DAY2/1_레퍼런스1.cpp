// 1_레퍼런스1
#include <iostream>

void swap(int p1, int p2)
{
	int temp = p1;
	p1 = p2;
	p2 = temp;
}
int main()
{
	int x = 10, y = 20;
	swap(x, y);

	std::cout << x << std::endl;
	std::cout << y << std::endl;
}