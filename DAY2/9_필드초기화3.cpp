#include <iostream>

class Point
{
	int x;
	int y;
public:
	//	Point() { x = 0; y = 0; std::cout << "Point()" << std::endl; }
	Point(int a, int b) { x = a; y = b; std::cout << "Point(int, int)" << std::endl; }
};

class Rect
{
	Point ptFrom;
	Point ptTo;
public:
	Rect(int x1, int y1, int x2, int y2) : ptFrom(x1, y1), ptTo(x2, y2)
	{
		std::cout << "Rect()" << std::endl;
	}
};


int main()
{
	Rect rc(1, 1, 10, 10);

}






