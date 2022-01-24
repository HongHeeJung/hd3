#include <iostream>

template<typename T1, typename T2>
//?? add(T1 a, T2 b)   // ?? 를 어떻게 해야 할까요 ?
//decltype(a + b) add(T1 a, T2 b) // 그런데.. 왜 이코드가 에러일까요 ?
								// a, b 를 선언전에 사용하는 표기법이라서 에러

//auto add(T1 a, T2 b) -> decltype(a + b) // ok C++11스타일
auto add(T1 a, T2 b)    // C++14 부터는 후위 반환 타입코드 생략도 가능
{
	return a + b;
}


int main()
{
	std::cout << add<int, double>(1, 2.2) << std::endl; // 정확한 표기법

	std::cout << add(1, 2.2) << std::endl; // 타입 생략가능. 
										// 함수 인자로 타입 결정


//	a = 10; // error. 변수를 선언전에 사용
//	int a;
//	a = 20; // ok

}