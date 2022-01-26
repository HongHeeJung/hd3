// 구글에서 "PEView" 검색후 1번째 링크, 이동해서 1번째 프로그램 다운 받으세요
// DAY3/debug/day3.exe    PEview 에서 열어 보세요
// pe1.cpp
#include <iostream>

int g1 = 0x11223344;
int g2 = 0x55667788;
								// .text(함수기계어코드)
int main()
{
	printf("hello");            //  .data(전역변수초기값) 

	const char* s1 = "hello";   //  .rdata(상수값들)
	char s2[] = "hello";
}
// 32bit(x86) 로 빌드하세요.		//  .rsrc(GUI라면 메뉴등의 리소스)
// g++ -m32
// WINDOWS 용 실행파일 : PE(Portable executable)
// LINUX              : ELF(Executable Linking Format)