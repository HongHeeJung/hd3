// 1_namespace1.cpp - 7 pag
#include <stdio.h>
namespace Audio
{
	void init()
	{
		printf("Audio init\n");
	}
}
namespace Video
{
	// Video 관련 함수, 구조체, 전역변수등을 모두 이안에서 만든다.
	void init()
	{
		printf("Video init\n");
	}
}

int main()
{
	Video::init();
}