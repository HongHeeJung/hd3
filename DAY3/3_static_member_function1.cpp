// 3_static_member_function1 - 114page
#include <iostream>

class Car
{
	int speed;
	static int cnt; 
public:
	Car() { ++cnt; }
	~Car() { --cnt; }

//	int get_count() { return cnt; } // 인스턴스 메소드 
								    // 반드시 객체가 있어야 호출가능하다.
									// c1.get_count()

	static int get_count() { return cnt; } // 정적(클래스) 메소드
									// 객체없이 호출가능한 멤버함수(메소드)
									// Car::get_count()로 호출
};
int Car::cnt = 0; // private에 있어도 외부 초기화는 허용됩니다.

int main()
{
	std::cout << Car::get_count() << std::endl;

	Car c1;
	Car c2;

	std::cout << Car::get_count() << std::endl;
	std::cout << c1.get_count()   << std::endl;

}