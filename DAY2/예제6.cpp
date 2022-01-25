#include <iostream>
#include <vector> // 이미 C++ 표준에 vector(동적배열을 vector라고 합니다.)

int main()
{
	std::vector<int> v(5); // 5개 배열
	v[0] = 10; // 연산자 재정의 문법으로 진짜 배열과 사용법 동일
	v.resize(7);

	std::cout << v[0] << std::endl;

	std::vector<int> v2; // 크기가 0
	v2.push_back(1);
	v2.push_back(5); // 자동 증가 됩니다.

	std::cout << v2.size() << std::endl;
}