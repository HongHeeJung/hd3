#include <iostream>

int g = 0;

//int x[100000] = { 1, 2, 3 }; // .data
  
int x[100000]; // 초기값 넣지 마세요.

int main()
{
	x[0] = 10;

	int n = 0;
	int* p = new int;
	const char* s = "Hello"; // s는 상수 메모리에 놓인 "Hello"를 가리킵니다.

	printf("전역변수 주소 : %p\n", &g);
	printf("지역변수 주소 : %p\n", &n);
	printf("동적할당 메모리 주소 : %p\n", p); // &p 아닙니다.
	printf("main 함수주소 : %p\n", &main);
	printf("상수메모리 문자열주소 : %p\n", s);

	delete p;
}
// PEView 에서 실행파일 열려있는것 닫으세요.
// 실행후 결과 확인해 보세요

// Release build 하세요.. => 탐색기에서 실행파일 크기 확인해 보세요
//	DAY3/Release/Day3.exe - 11k 						