#include <iostream>
#include <vector>

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
//void HappyNewYear(Dog* p) // Dog�� ���� ������ �Լ�
void HappyNewYear(Animal* p) // ����(���ϱ�� Ŭ������ ����ϴ� )Ÿ���� ó���ϴ�
{							 // �Լ� - 142 page
	++(p->age);
}
int main()
{
	Dog d; HappyNewYear(&d); // ok
	Cat c; HappyNewYear(&c); // ok


	std::vector<Dog*> woori; // Dog �� �����ϴ� �츮

	std::vector<Animal*> woori; // ��� ����(����)�� �����ϴ� �����̳� �����
								// 142 �Ʒ��κ�

}