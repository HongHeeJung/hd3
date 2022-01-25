// 3_new - 52page
#include <iostream>
#include <cstdlib>   // malloc 을 위해. vc는 없어도 되긴합니다.

int main()
{
	// C 스타일의 동적 메모리 할당
	int* p1 = (int*)malloc(sizeof(int) * 10);
	free(p1);

	// C++ 스타일의 동적 메모리 할당
	int* p2 = new int;  // new 타입;
	delete p2;

	int* p3 = new int[10];  // 배열 모양 할당으
	delete[] p3;			// "delete[]" 로 제거 합니다.
}
// 52 page 중간
//			정체				반환타입		인자			핵심
// malloc	함수				void*		크기			생성자호출안됨
//						    캐스팅필요
// 
// new		키워드(연산자)   정확한 타입	타입			생성자호출됨.

// 파이썬
// c = Car()	// Car.___new__()
				// Car.__init__()