#include <iostream>

// 43 page 그림 완벽히 이해 하셔야 합니다.
void inc1(int  n) { ++n; }
void inc2(int* p) { ++(*p); }
void inc3(int& r) { ++r; }

int main()
{
	int a = 10, b = 10, c = 10;

	inc1(a); // call by value 실패
	inc2(&b);// call by pointer 성공
	inc3(c); // call by reference 도 성공

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

//	int* p = 0; // 된다.
//	int& r; //  안된다.
}

void f1(int* p)
{
	// 안전하려면 if 문 필요
	if (p != 0)
	{
		*p = 10;
	}
}
void f2(int& r)
{
	r = 10; // if 문 필요없다. 안전하다.
}
// 결론 : 함수 만들때 레퍼런스로 받는것은
//			포인터로 받는 것과 유사하지만
//			좀더 편리하고, 안전하다.
//		    하지만 대부분, 포인터만으로도 다 구현가능하다.





