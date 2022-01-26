// 7_상수멤버함수1 - 119 page
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
void Point::print() const  // 상수 멤버 함수는 외부 구현시
{							// 반드시 const 붙여야 합니다.
	std::cout << x << ", " << y << std::endl;
}




int main()
{

}


