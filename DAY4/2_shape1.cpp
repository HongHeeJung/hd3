// 2_shape1.cpp  - 교재 152 page 부터 있는 예제 입니다.
#include <iostream>
#include <vector>

// 1. 모든 도형을 타입화 하면 편리하다
// 2. 모든 도형의 공통의 기반 클래스가 있다면 묶어 관리 할수 있다.
class Shape
{
};
class Rect : public Shape
{
public:
	void draw() { std::cout << "Draw Rect" << std::endl; }
};
class Circle : public Shape
{
public:
	void draw() { std::cout << "Draw Circle" << std::endl; }
};
int main()
{
	std::vector<Shape*> v; 

	while (1)
	{
		int cmd;
		std::cin >> cmd;

		if (cmd == 1)
		{
			Shape* p = new Rect;
			v.push_back(p);
		}
		else if (cmd == 2)
		{
			v.push_back(new Circle);
		}
		else if (cmd == 9)
		{
			for (auto p : v)
				p->draw();
		}
	}
}
// 왜 이코드가 에러일까요 ? 해결책은 뭘까요 ?
