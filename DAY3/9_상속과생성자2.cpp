// 9_상속과생성자1 - 135 page
#include <iostream>

class Base
{
	int data1;
public:
	Base() { std::cout << "Base()" << std::endl; }
	Base(int a) { std::cout << "Base(int)" << std::endl; }
	~Base() { std::cout << "~Base()" << std::endl; }
};

class Derived : public Base
{
	int data2;
public:
	// 사용자가 만든 코드		// 컴파일러가 변경한 코드
	Derived()				// Derived() : Base()
	{ 
		std::cout << "Derived()" << std::endl; 
	}
	Derived(int a)			// Derived(int a) : Base()
	{ 
		std::cout << "Derived(int)" << std::endl; 
	}
	~Derived()
	{
		std::cout << "~Derived()" << std::endl; 

		// ~Base();    <<== 컴파일러가 추가한 코드
	}
};
int main()
{
	//	Derived d1; // call Derived::Derived()
	Derived d1(5);
}