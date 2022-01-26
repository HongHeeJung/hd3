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
//void HappyNewYear(Dog* p) // Dog만 전달 가능한 함수
void HappyNewYear(Animal* p) // 동종(동일기반 클래스를 사용하는 )타입을 처리하는
{							 // 함수 - 142 page
	++(p->age);
}
int main()
{
	Dog d; HappyNewYear(&d); // ok
	Cat c; HappyNewYear(&c); // ok


	std::vector<Dog*> woori; // Dog 만 보관하는 우리

	std::vector<Animal*> woori; // 모든 동물(동종)을 보관하는 컨테이너 만들기
								// 142 아래부분

}