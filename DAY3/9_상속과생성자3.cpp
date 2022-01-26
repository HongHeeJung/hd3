// 9_상속과생성자1 - 135 page
#include <iostream>

class Base
{
	int data1;
public:
//	Base()      {  }
	Base(int a) {  }
	~Base()     {  }
};
class Derived : public Base
{
	int data2;
public:
	// 기반 클래스에 "디폴트 생성자가 없을때" 아래 처럼만 만들면 컴파일 에러입니다.
	// 컴파일러가 변경한 코드(오른쪽 주석)을 생각해 보세요.
//	Derived()      {} // Derived()      : Base() {}
//	Derived(int a) {} // Derived(int a) : Base() {}
	~Derived()     {}

	// 해결책은 사용자가 직접 기반 클래스 생성자를 호출하는 코드를 제공해야합니다.
	// 파이썬 하신분은 아래 코드가 "super.__init__()" 입니다.
	Derived()      : Base(0) {}
	Derived(int a) : Base(a) {}
};



int main()
{
	//	Derived d1;
	Derived d1(5);
}

// 4:10 분에 이어집니다