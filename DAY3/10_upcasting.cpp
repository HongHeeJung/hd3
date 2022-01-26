// 10_upcasting - 140 page
#include <iostream>

class Animal
{
	int age;
public:
	void cry() {}
};
class Dog : public Animal
{
	int color;
public:
	void run() {}
};
int main()
{
	Dog dog;
	Dog*	p1 = &dog;
	int*	p2 = &dog;
	Animal* p3 = &dog;
}




