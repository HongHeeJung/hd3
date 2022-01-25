// 3_new - 52page
#include <iostream>
#include <cstdlib>   // malloc 을 위해. vc는 없어도 되긴합니다.

int main()
{
	// C 스타일의 동적 메모리 할당
	int* p1 = (int*)malloc(sizeof(int) * 10);
	free(p1);

	// C++ 스타일의 동적 메모리 할당
	int* p2 = new int;
	delete p2;

	int* p3 = new int[10];  // 배열 모양 할당으
	delete[] p3;			// "delete[]" 로 제거 합니다.
}