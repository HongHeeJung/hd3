#include <iostream>

// 핵심 1. 필요한 타입을 먼저 설계 하자.
struct Rect
{
	int left;
	int top;
	int right;
	int bottom;
};

int getRectArea(const Rect& rc)
{
	return (rc.right - rc.left) * (rc.bottom - rc.top);
}
void drawRect(const Rect& rc)
{
	std::cout << "draw rect" << std::endl;
}
int main()
{
	Rect rc = { 1, 1, 10, 10 };
	int area = getRectArea(rc);
}