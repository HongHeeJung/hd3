// 10 page
//#include <stdio.h> // C 언어 헤더. namespace 라는 문법을 사용할수 없음.
#include <cstdio>  // C++ 용 헤더. printf가 전역에도 있고, std 에도 있다.

//   C 헤더      C++ 헤더
// <xxxx.h>  ==>  <cxxxx>
// <stdio.h> ==>  <cstdio>
// <stdlib.h>==>  <cstdlib>
// <string.h>==>  <cstring>

// C++ 표준 헤더 : .h 를 사용하지 않는다.
//				단, 사용자가 만들때는 .h 를 붙여도 된다.(붙이는것 권장)

int main()
{
	printf("hello\n"); // ok
	std::printf("hello\n"); // 될까요 ?
							// printf 는 C표준이지만, C++표준이기도 합니다.
}