// 3_변수1- 18page
#include <iostream>

struct Point
{
	int x;
	int y;
};
int main()
{
	struct Point p1; // C 스타일
	Point p2;        // C++, struct 없어도 된다.

	int n1 = 0b10;		// C++11, C11 부터 2진수 표기법 가능
	int n2 = 1'000'000;	// C++11 부터 자릿수 표기법 가능
						// 결국 주석의 효과.
						// 컴파일러는 정수형 리터럴 사이의 ' 는 무시한다.
	// 새로운 타입
	bool b = true; // 또는 false 또는, 0, 1 등. 크기 1byte

	long long n = 0; // 64 비트 정수 ( 8 byte)
}