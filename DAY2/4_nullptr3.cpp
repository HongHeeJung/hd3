// 4_nullptr2
#include <iostream>

void f(int   n) { std::cout << "int" << std::endl; }	// 1
void f(void* n) { std::cout << "void*" << std::endl; }	// 2
void g(char* n) { std::cout << "char*" << std::endl; }

int main()
{
	// 아래 코드가 현재 일부의 C++ 컴파일러가 만들고 있는 모양입니다.
#ifdef __cplusplus
	#define NULL 0
#else 
	#define NULL (void*)0
#endif

	f(NULL); // 위처럼 되어 있으면 그냥 0이므로 1번 호출.
			 // 결국, NULL 을 포인터 0으로 사용하고 싶었으나..
			 // 실패!!

	g(NULL); // ok.. 

	// NULL 이 아닌 진짜 포인터 0 이 필요했다.
	// 그래서 nullptr를 새로 도입
	f(nullptr);
	g(nullptr);
}
// 이 소스 핵심 : NULL 만드는 법과 문제점.