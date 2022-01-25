#include <iostream>

// 핵심 1. 필요한 타입을 먼저 설계 하자.
// 2. 상태를 나타내는데이타와 상태를 가지고 연산을 수행하는 함수를
//	  묶어서 타입을 설계하자.
//    C++ 구조체는 함수를 포함할수 있다.
struct Rect
{
	int left;
	int top;
	int right;
	int bottom;

	int getArea()
	{
		return (right - left) * (bottom - top);
	}
	void draw()
	{
		std::cout << "draw rect" << std::endl;
	}
};

int main()
{
	Rect rc = { 1, 1, 10, 10 };
//	int area = getRectArea(rc);  // 1
	int area = rc.getArea(); // 2

	rc.draw();
}