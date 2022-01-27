// 1_virtual1
#include <iostream>

class Animal
{
public:
	void cry() { std::cout << "Animal cry" << std::endl; }
};
class Dog : public Animal
{
public:
	void cry() { std::cout << "Dog cry" << std::endl; }
};
int main()
{
	Animal a; a.cry();
	Dog    d; d.cry();
	Animal* p = &d;
	p->cry();
}