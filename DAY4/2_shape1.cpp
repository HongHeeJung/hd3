// 2_shape1.cpp  - 교재 152 page 부터 있는 예제 입니다.
#include <iostream>
#include <vector>

// 1. 모든 도형을 타입화 하면 편리하다
// 2. 모든 도형의 공통의 기반 클래스가 있다면 묶어 관리 할수 있다.

// 3. 모든 도형의 공통의 특징(draw) 는 반드시 기반 클래스에도 있어야 한다.
//    그래야, 기반 클래스 타입으로 묶어서 사용할때
//    해당 특징을 사용할수 있다.

// 4. 기반 클래스 멤버 함수중, 파생클래스가 재정의(override) 하게 되는 함수는
//    반드시 가상함수(virtual) 가 되어야 한다.

class Shape
{
public:
	virtual void draw() { std::cout << "Draw Shape" << std::endl; }
};
class Rect : public Shape
{
public:
	virtual void draw() { std::cout << "Draw Rect" << std::endl; }
};
class Circle : public Shape
{
public:
	virtual void draw() { std::cout << "Draw Circle" << std::endl; }
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
			// Rect r;   이렇게 만들면 {} 벗어날때 바로 파괴 입니다.
			Shape* p = new Rect; // 이렇게 해야 파괴되지 않습니다.
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
