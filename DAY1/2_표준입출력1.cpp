// 2_표준입출력1.cpp - 12 page
//#include <cstdio>
#include <iostream> // std::cout, std::cin 을 위해서, printf

int main()
{
	int    n = 10;
	double d = 3.4;

	// C 표준 출력 함수
	printf("%d\n", n);

	// C++ 표준 출력 "객체"
	std::cout << n << ", " << d << std::endl; //  '\n';

	// 표준 입력
	scanf_s("%d", &n); // C

	std::cin >> n; // C++.
					// 핵심 : "&n" 이 아니라 "n"
					//        ">>" 방향에 주의 하세요.
}

// 11:05 분에 이어 집니다.