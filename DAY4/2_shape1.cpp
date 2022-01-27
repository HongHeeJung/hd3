// 2_shape1.cpp  - ���� 152 page ���� �ִ� ���� �Դϴ�.
#include <iostream>
#include <vector>

// 1. ��� ������ Ÿ��ȭ �ϸ� ���ϴ�
// 2. ��� ������ ������ ��� Ŭ������ �ִٸ� ���� ���� �Ҽ� �ִ�.
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
// �� ���ڵ尡 �����ϱ�� ? �ذ�å�� ����� ?
