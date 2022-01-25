// 1_Ä³½ºÆÃ - 48 page
#include <iostream>

int main()
{
	double d = 3.4;
	int n = d;

	int* p = malloc(100);
	free(p);

	int* p1 = &d;
	*p1 = 3.4;

	const int c = 10;
	int* p2 = &c;
	*p2 = 20;

	std::cout << c << std::endl;
}