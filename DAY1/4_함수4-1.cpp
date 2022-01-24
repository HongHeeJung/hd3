#include <cstdio>

template<typename T>
T square(T a)
{
	return a * a;
}
int main()
{
	square(3);		
//	square(3.4);

//	printf("%p\n", &square); // 될까요 ?? 잘 생각해 보세요 error
							// square 는 메모리에 존재하는 함수가 아닙니다.
							// 컴파일시간에 컴파일러가 사용하는 "틀"입니다.
							// 메모리에 놓이는 것이 아니므로 주소는 구할수없습니다.
	
	printf("%p\n", &square<int> ); // ok
							// square<int> 는 틀을 사용해서 만든 함수입니다.
							// 메모리에 있으므로 주소를 구할수 있습니다.
}
// C++언어에서 가장중요한것 : 객체지향 + generic(template)

// 3:05분에 이어집니다.
