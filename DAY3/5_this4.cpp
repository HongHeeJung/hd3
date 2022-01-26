// 5_this4 - 129page
#include <iostream>

class Car
{
	int speed;
public:
	void set(int speed)
	{
		// this 활용 1. 멤버임을 명확히 하고 싶을때
		// speed 라고만 하면 지역변수(인자)의 speed입니다.
		// 멤버 임을 명확히 하려면
		this->speed = speed;
	}
	// this 활용 2. this를 반환하는 함수 - 중요
	Car* go() { return this; }
	Car& go2() { return *this; } // ==> 129 page 아래 박스
};
int main()
{
	Car c;
	c.set(10);
	// this를 반환하는 함수는 함수 호출을 연속적으로 할수 있습니다.
	c.go()->go()->go()->go();
	c.go2().go2().go2().go2();

	std::cout << "A" << "B" << "C"; // 는 아래와 같습니다.
//	std::cout.operator<<("A").operator<<("B").operator<<("C");
}