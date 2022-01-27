// 3_override
#include <iostream>

class Shape
{
public:
	virtual void draw() { std::cout << "Shape draw" << std::endl; }
};

class Rect : public Shape
{
public:
};
int main()
{
	Shape* p = new Rect;
	p->draw();
	delete p;
}