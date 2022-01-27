// 5_인터페이스
#include <iostream>

class Camera
{
public:
	void take() { std::cout << "take picture" << std::endl; }
};
class People
{
public:
	void useCamera(Camera* p) { p->take(); }
};
int main()
{
	People p;
	Camera c;
	p.useCamera(&c);
}