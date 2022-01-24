// 함수 오버로딩 30page
#include <iostream>
// 인자의 타입이나 갯수가 다르면 "동일이름의 함수를 여러개"만들수 있다.
// 거의 모든 객체지향 언어가 제공하는 문법
// 오버로딩 안되는 언어 : C 언어, Python 
int square(int a)
{
	return a * a;
}
double square(double a)
{
	return a * a;
}

int main()
{
	std::cout << square(3)   << std::endl;
	std::cout << square(3.4) << std::endl;
}

// 함수 오버로딩 원리
// name mangling : C++ 컴파일러가 컴파일 시간에 
//				함수 이름 과 인자의 형태를 가지고 새로운 이름으로 변경하는 것.
//				결국, 소스에서는 이름이 동일하지만
//				컴파일된 후에는 달라진다.