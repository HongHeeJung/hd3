#include <iostream>
#include <vector>

class Shape
{
	int color;
public:
	void setColor(int c) { color = c; }
	virtual double getArea() const { return 0; }

	virtual void draw() { std::cout << "Draw Shape" << std::endl; }

	// �ڽ��� ���纻�� ����� �����Լ��� ���� �����ϰ� Ȱ��˴ϴ�
	virtual Shape* Clone() const
	{
		Shape* p = new Shape;
		p->color = color;    // ��� ����� �ڽŰ� �����ϰ� ��������
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
		// �� ����� �����ϰ� p��ü ����
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
		// �� ����� �����ϰ� p��ü ����
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
			std::cout << "���° ������� ������ �����ұ�� >> ";
			int k;
			std::cin >> k;

			Shape* p = v[k - 1]->Clone(); // � �������� ���ʿ� ����.
										// �׳�, "������ �����޶�"
										// ������!!!.. OCP �� �����մϴ�.
			v.push_back(p);

		}
	}
}

