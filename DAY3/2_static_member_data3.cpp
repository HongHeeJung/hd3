// 2_static_member_data1

#include <iostream>

// 방법 3. 



class Car
{
	int speed;
public:
	static int cnt; // static 멤버 데이타
					// = 0 등으로 초기화 안됩니다.

	Car() { ++cnt; }
	~Car() { --cnt; }
};
// static 멤버 데이타는 외부 선언이 필요 합니다. 초기화도 여기서.
int Car::cnt = 0;

int main()
{
	// static 멤버 데이타는 객체가 없어도
	// 메모리에 존재 합니다.
	std::cout << Car::cnt << std::endl;

	Car c1;
	Car c2;

	// static 멤버 데이타 접근 방법 - 113 page
	// 1. 클래스이름::cnt  ==> 권장!!
	// 2. 객체이름.cnt     ==> 이렇게 하면 cnt가 static 인지 아닌지 
						   //  알수 없습니다(가독성)
	std::cout << Car::cnt << std::endl;
	std::cout << c1.cnt   << std::endl; 

	// 다른 객체지향 언어(C#, java, swift 등)는 모두
	// "클래스 이름" 으로만 static 멤버에 접근 가능합니다.
}