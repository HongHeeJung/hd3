#include <iostream>

//void f1(int arr[3])  // error. 배열은 복사 될수 없으므로!!
void f1( int* p, int sz )
{
}
template<typename T, int N>  // 템플릿은 정수도 가능
inline int size(T (&arr)[N])
{
	return N;
}
int main()
{
	int x[3] = { 1,2,3 };
//	f1(&x[0], 3); // 배열의 1번째요소의 주소 전달
//	f1(x, 3); 
	int n = size(x); // C++에서는 배열의 크기를 구하는 함수도 만들수 있습니다.

	for (auto n : x) // x의 갯수를 구하는 원리가 위와 유사합니다.
	{
	}
}