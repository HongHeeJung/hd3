// 7_상수멤버함수1 - 119 page
#include <iostream>

class Point
{
public:
	int x;
	int y;
	Point(int x, int y) : x(x), y(y) {}

	void set(int a, int b)
	{
		x = a;
		y = b;
	}
	// 상수 멤버 함수 : 멤버 함수안에서 멤버데이터를 수정하지 않을것이라고
	//					컴파일러에게 알려 주는것
	//					멤버 값을 수정하는 코드가 있으면 에러!
	// const member function
	void print() const  
	{
//		x = 10; // error
		std::cout << x << ", " << y << std::endl; 
	}
};
int main()
{
	const Point pt(1, 2);

	pt.x = 10;      // error. public 에 있지만 상수객체이므로
	pt.set(10, 20); // error
	pt.print();     // 상수멤버 함수가 아니면 error.
					// 상수 멤버 함수 였다면 ok

	// "상수 객체는 상수 멤버함수만 호출할수 있다." 121 page 아래 부분
}


