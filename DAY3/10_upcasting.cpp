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
	Dog*	p1 = &dog; // ok
//	int*	p2 = &dog; // error
	Animal* p3 = &dog; // ok. upcasting
			
	// 핵심 1. 기반 클래스 포인터로 파생클래스 객체를
	//         가리킬수 있다.

	// 핵심 2. 하지만, Animal* p 를 사용하면 컴파일러는
	//			p가 가리키는 곳이 Animal 이라고 생각하므로
	//			Dog 에서 추가한 멤버는 접근할수 없습니다
	p3->cry(); // ok 
//	p3->run(); // error

	// 핵심 3. Dog 고유에 멤버에 접근하려면 캐스팅하면 됩니다.
	//		단, 이경우 p3가 가리키는 곳이 Dog 가 확실해야 합니다.
	//		Dog 가 아니면 runtime error 가 발생할수 있습니다.
	static_cast<Dog*>(p3)->run(); // ok

}




