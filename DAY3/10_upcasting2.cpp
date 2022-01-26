#include <iostream>

class Animal
{
public: 
	int age;
};
class Dog : public Animal {};
class Cat : public Animal 
{
public:
	int color;
};
void HappyNewYear(Dog* p)
{
	++(p->age);
}
int main()
{
	Dog d; HappyNewYear(&d);
	Cat c; HappyNewYear(&c);
}