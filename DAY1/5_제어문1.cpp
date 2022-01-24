// 5_제어문1 - 38 page
#include <iostream>

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++)
	{
		std::cout << x[i] << std::endl;
	}
	// C++11의 새로운 for문 - "range for"
	// 파이썬 : for n in x:
	int i = 0;
	for (auto n : x)   
	{
		++i;
		std::cout << n << std::endl; 
	}

	// 문자열의 경우, 문자열 배열 또는 string 은 가능. char* 는 안됨
	char s[] = "ABCDEFG";		// range for 가능
//	std::string s = "ABCDEFG";	// range for 가능
//	const char* s = "ABCDEFG";  // range for 안됨

	for (auto c : s)
	{
		std::cout << c << std::endl;
	}
}


