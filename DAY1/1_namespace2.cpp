#include <stdio.h>
namespace Audio
{
	void init() { printf("Audio init\n");}
}
namespace Video
{
	void init() { printf("Video init\n");}
}

// global namespace : 특정 이름공간에 포함되지 않은 공간
void init() { printf("global init\n"); }

// using 은 함수안 또는 밖에 있을수 있습니다.
using Video::init;

int main()
{
	// namespace 안에 있는 요소를 사용하는 3가지 방법 - 8page
	Video::init(); // 1.완전한 이름

//	using Video::init; // 2. using 선언(declaration)
	init();				//   init 함수만 Video 이름 없이 사용. 

	::init(); // :: ==> scope resolution 연산자. global 의미

	using namespace Video; // 3. using 지시어(directive)
	init();					//   Video 안의 모든 심볼을 Video 이름없이
}		