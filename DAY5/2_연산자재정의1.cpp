// 2_연산자재정의1 - 182 
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}
};
int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	// 두 점의 덧셈을 하고 싶습니다 
	// 다음중 가장 보기 좋은 코드는 ?
	Point p3 = Add(p1, p2);  // C 언어 스타일
	Point p4 = p1.Add(p2);   // Java 언어 스타일
	Point p5 = p1 + p2;      // C++ 언어 스타일

	// a + b 라고 할때
	// 1. a, b 가 모두 primitive 타입이면 그냥 덧셈 수행
	// 2. a.operator+(b) 를 찾게 됩니다. 있으면 호출.. 
	// 3. operator+(a, b) 를 찾게 됩니다. 있으면 호출..
	// 4. 1, 2, 3이 모두 실패하면 에러

}
