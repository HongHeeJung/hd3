// C++ : private, protected, public
// 다른 언어들 : 위 3개  + internal, package 등의 개념이 있기도 합니다.

/*
class Car:
	speed = 0
	_speed = 0
	__speed = 0   => 컴파일시 Car_speed 로 변경

c = Car()

print( c.__dic__)
c.__speed = 0 # error
*/

class Base
{
private:   int a; // 자신의 멤버 함수만 접근 가능 + friend 함수
protected: int b; // 자신의 멤버 + 파생클래스 멤버 가 접근 가능 + friend
public:    int c; // 누구나 접근 가능.
};
class Derived : public Base
{
public:
	void f()
	{
		a = 10; // error. 기반 클래스의 private 멤버는 파생클래스에서 접근 안된다.
				//         접근 하려면 기반 클래스 함수를 사용해야 한다.
		c = 10; // ok
	}
};
// Derived d;  ==> a, c 가 메모리에 있지만 "Derived 함수는 접근 안됨"

int main()
{
	Base base;
	base.a = 10; // error
	base.c = 10; // ok
}
// 134page