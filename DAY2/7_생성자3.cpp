// 7_생성자2 - 78 page
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point() { x = 0; y = 0; std::cout << "Point()" << std::endl; }
	Point(int a, int b) { x = a; y = b; std::cout << "Point(int, int)" << std::endl; }
};

class Rect
{
	Point ptFrom;
	Point ptTo;
public:
	Rect() { std::cout << "Rect()" << std::endl; }
};
int main()
{
	Rect rc; // 화면 출력 결과 예측해 보세요 ( 80page 아래 부분이야기)

}






