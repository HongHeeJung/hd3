// 1번 복사
// 2_연산자재정의1 - 182 
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}
	
	Point operator+(const Point& p)
	{
		std::cout << "member operator+" << std::endl;
		Point temp(x + p.x, y + p.y);
		return temp;
	}	

	friend Point operator+(const Point& p1, const Point& p2);
}; 
Point operator+(const Point& p1, const Point& p2)
{
	std::cout << "not member operator+" << std::endl;

	Point temp(p1.x + p2.x, p1.y + p2.y);
	return temp;
}

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	Point p3 = p1 + p2;  // 1. p1.operator+(p2)  
						 // 2. operator+(p1, p2)

	// 멤버가 좋은가요 ? 일반 함수가 좋은가요 ?
	// 주장 1. private 을 접근하기에는 멤버가 좋지 않을까 ?
	// 주장 2. 멤버로 안될때가 있다. 일관성을 위해 일반함수로 모두 통일하자.

	Point p4 = p1 + p2; // 
	Point p5 = p1 + 5;
	Point p6 = 5  + p1;
}


