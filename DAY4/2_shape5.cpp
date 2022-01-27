#include <iostream>
#include <vector>



class Shape
{
	int color;
public:
	void setColor(int c) { color = c; }

	// �����Լ��� ����� �� : �Ļ�Ŭ������ ������ ������ ������ �����ְڴٴ°�
	// ���� �����Լ��� ����°� : �Ļ�Ŭ���� �� ������ ��Ű�� ��.
	
	// �Ʒ� �ǹ̴� "getArea()"�� �������� ���� �����ǰ��� "-1�� ��ȯ�ȴ�"
	// ������ �����ʿ�!!
	virtual double getArea() const { return -1; }

	virtual void draw() = 0;
	virtual Shape* Clone() const = 0;
};


class Rect : public Shape
{
public:
	virtual void draw() override { std::cout << "Draw Rect" << std::endl; }

	// �����Լ� �����ǽ� "��ȯ Ÿ��"�� ��Ӱ��� Ÿ�Գ����� ���� �����մϴ�
	// �Ʒ� �ڵ忡�� "int*" �� ������ �ȵ˴ϴ�.
	virtual Rect* Clone() const override
	{
		Rect* p = new Rect;
		return p;
	}
};
class Circle : public Shape
{
public:
	virtual void draw() override { std::cout << "Draw Circle" << std::endl; }

	virtual Circle* Clone() const override 
	{
		Circle* p = new Circle;
		return p;
	}
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

			Shape* p = v[k - 1]->Clone();
			v.push_back(p);

		}
		else if (cmd == -1)
			break;
	}

	for (auto p : v)
		delete p;
}
