#include <iostream>
#include <vector>

class Shape
{
	int color;
public:
	void setColor(int c) { color = c; }
	virtual double getArea() const { return 0; }

	virtual void draw() { std::cout << "Draw Shape" << std::endl; }

	// 자신의 복사본을 만드는 가상함수는 아주 유용하게 활용됩니다
	virtual Shape* Clone() const
	{
		Shape* p = new Shape;
		p->color = color;    // 모든 멤버를 자신과 동일하게 설정한후
		return p;
	}
};

class Rect : public Shape
{
public:
	virtual void draw() { std::cout << "Draw Rect" << std::endl; }

	virtual Shape* Clone() const
	{
		Rect* p = new Rect;
		// 내 멤버와 동일하게 p객체 설정
		return p;
	}

};



class Circle : public Shape
{
public:
	virtual void draw() { std::cout << "Draw Circle" << std::endl; }

	virtual Shape* Clone() const
	{
		Circle* p = new Circle;
		// 내 멤버와 동일하게 p객체 설정
		return p;
	}
};
// Circle* p = new Circle;
// Shape* p2 = p->Clone();



class Triangle : public Shape
{
public:
	virtual void draw() { std::cout << "Draw Triangle" << std::endl; }
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
		else if (cmd == 8)
		{
			std::cout << "몇번째 만들었던 도형을 복제할까요 >> ";
			int k;
			std::cin >> k;

			Shape* p = v[k - 1]->Clone(); // 어떤 도형인지 알필요 없다.
										// 그냥, "복제본 만들어달라"
										// 다형성!!!.. OCP 를 만족합니다.
			v.push_back(p);

		}
	}
}

