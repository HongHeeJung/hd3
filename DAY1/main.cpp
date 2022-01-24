// square.h 만드세요
// extern "C" : C++ 컴파일러에게
//			    해당 심볼이 C언어라고 알려주는것
//				name mangling 을 하지 말라는 것
// extern "C" int square(int a);


#ifdef __cplusplus
extern "C" {
#endif

	int square(int a);

#ifdef __cplusplus
}
#endif

// 함수 오버로딩은 아주 쉬워 보이는 문법입니다.
// 그런데, 원리인 "name manling" 현상 때문에, C와 C++ 언어사이의 호환성 문제
// 가 있습니다. C/C++을 모두 지원하는 헤더는 위처럼 만들어야 합니다.








      

// square.c 만드세요 - 반드시 확장자 .c로 하세요
int square(int a)
{
	return a * a;
}

// main.c - 반드시 .c 로 하세요
#include "square.h"

int main()       
{
	square(3); // 왜 에러인가요 ??
			   // call ?square@@YAHH@z
}


// square.c  main.cpp 빌드 열어놓고 컴파일해보세요