// 7_�������Լ�1 - 119 page
#include <iostream>
// Point.h
class Point
{
public:
	int x;
	int y;
	Point(int x, int y);
	void set(int a, int b); 
	void print() const;
};

// Point.cpp
#include "Point.h"

Point::Point(int x, int y) : x(x), y(y) {}

void Point::set(int a, int b)
{
	x = a;
	y = b;
}
void Point::print() const  // ��� ��� �Լ��� �ܺ� ������
{							// �ݵ�� const �ٿ��� �մϴ�.
	std::cout << x << ", " << y << std::endl;
}




int main()
{

}


