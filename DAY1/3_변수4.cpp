// 25 page
struct Point
{
	int x;
	int y;
};
int main()
{
	Point pt = { 1,2 };
	int arr[3] = { 1,2,3 };

	// C++17 부터 구조체나 배열에서 값을 꺼낼때 아래처럼 가능합니다.
	// cl 소스이름.cpp /std:c++latest
	// "structure binding" 이라는 문법입니다.
	auto [x, y] = pt;	// int x = pt.x
						// int y = pt.y
						// 파이썬 : x, y = (1, 2)  ==> unpacking
//	int[x1, y1] = pt; // error. auto 만 됩니다.

	// 구조체 뿐 아니라 배열도 가능
	auto [a1, b1, c1] = arr; // 단, 갯수가 일치해야 합니다.
//	auto [a2, b2] = arr; // error. 갯수 다름

}




