// 4_nullptr2
#include <iostream>

void f(int   n) { std::cout << "int"   << std::endl; }	// 1
void f(void* n) { std::cout << "void*" << std::endl; }	// 2
void g(char* n) { std::cout << "char*" << std::endl; }

int main()
{
	f(0);		// 1.  0은 정수 입니다. int 타입   
	f((void*)0);// 2. 

#define NULL (void*)0

	f(NULL);
	g(NULL); // ? 잘생각해 보세요.
			 // void* => char*  로의 암시적 형변환 필요
			 // C 언어는 암시적 변환 허용
			 // C++은 허용 안됨..
			 // 그래서 현재는 C++이므로 에러.
}