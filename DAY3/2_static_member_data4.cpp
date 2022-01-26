#include <iostream>


class Car
{
	int speed;		// 객체당 한개, "인스턴스 필드(멤버데이타)"라는 용어 사용
public:
	static int cnt; // 모든 (Car)객체가 공유. "클래스 필드(멤버데이타)"라는 용어사용

	Car() { ++cnt; }
	~Car() { --cnt; }
};
int Car::cnt = 0;

class Truck
{
	int speed;
public:
	static int cnt;
	Truck() { ++cnt; }
	~Truck() { --cnt; }
};
int Truck::cnt = 0;



int main()
{

}