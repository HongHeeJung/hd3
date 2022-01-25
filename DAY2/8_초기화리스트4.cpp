#include <iostream>

class Point
{
public:
	int x;
	int y;

	Point() : y(0),  x(y) {}	// undefined(미정의 동작)
							// "표준 문서에서는 사용하지 말라고만 되어있고
							// 사용하면 어떻게 된다 고는 정의 한적이 없는것"
							// 컴파일러마다 현상이 다르다.
							// 88p 제일 아래!
					
};
int main()
{
	Point p1;

	std::cout << p1.x << std::endl; // ?
	std::cout << p1.y << std::endl; // ?
}

// 3:05 분에 이어집니다.