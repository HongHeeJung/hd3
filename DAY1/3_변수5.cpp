#include <iostream>
#include <string>
// 26page
int main()
{
	// C언어 문자열 : char [] 또는 char* - 너무 불편합니다.
	char s1[] = "ABCD";
	char s2[5];

	s2 = s1; // error. strcpy() 필요
	if (s2 == s1) {} // error 는 아니지만, 주소 비교, 항상 false
					// strcmp(s2, s1) == 0

	std::string s3 = "ABCD";
	std::string s4;

	s4 = s3;		// 대입가능
	s4 = s4 + s3;	// 덧셈도 가능

	if (s4 == s3) {}// 이렇게 비교도 가능

	std::cout << s4 << std::endl; // 출력도 가능.

	// 즉, s3, s4 는 int 타입처럼 사용가능합니다.
	// "AB" * 3 => "ABABAB"
	// "decorator", "descriptor"
	// @static
}




