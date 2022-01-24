// 15page 아래 부분
#include <iostream>
#include <iomanip>  // C++의 "다양한 입출력 조정자 함수"를 위한 헤더
					// "i/o manipulator(조정자)"
int main()
{
	int n = 10;
	std::cout << n << std::endl; // 10진수

	std::cout << std::hex << n << std::endl; // 16진수
	std::cout << std::dec << n << std::endl; // 10진수
	std::cout << std::setw(10) << n << std::endl;

	std::cout << std::setw(10) << std::setfill('#') << n << std::endl;
}
// cppreference.com 에서 "setw" 찾아 보세요 - 1번째 링크









