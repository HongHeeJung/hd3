// 2_shape1.cpp  - ���� 152 page ���� �ִ� ���� �Դϴ�.
#include <iostream>
#include <vector>

// 1. ��� ������ Ÿ��ȭ �ϸ� ���ϴ�
// 2. ��� ������ ������ ��� Ŭ������ �ִٸ� ���� ���� �Ҽ� �ִ�.

// 3. ��� ������ ������ Ư¡(draw) �� �ݵ�� ��� Ŭ�������� �־�� �Ѵ�.
//    �׷���, ��� Ŭ���� Ÿ������ ��� ����Ҷ�
//    �ش� Ư¡�� ����Ҽ� �ִ�.

// 4. ��� Ŭ���� ��� �Լ���, �Ļ�Ŭ������ ������(override) �ϰ� �Ǵ� �Լ���
//    �ݵ�� �����Լ�(virtual) �� �Ǿ�� �Ѵ�.

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
			// Rect r;   �̷��� ����� {} ����� �ٷ� �ı� �Դϴ�.
			Shape* p = new Rect; // �̷��� �ؾ� �ı����� �ʽ��ϴ�.
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
