// 9 page
#include <algorithm>
using namespace std;

int count = 10;

int main()
{
	// 모든 C++ 표준은 "std"라는 이름공간 안에 있습니다.
	int n = std::min(10, 30); // C++ 표준 함수. <alogrithm>헤더에 있습니다.

	int n2 = count; // 왜 에러일까요 ?
					// C++ 표준에 "std::count()" 라는 함수 가있습니다.
					// using namespace std 때문에
					// 전역변수 count 와 이름 충돌
}





