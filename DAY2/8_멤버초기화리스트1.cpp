// 8_멤버초기화리스트1
#include <iostream>
#include <string>

class Person
{
	std::string name;
	int  age;
public:
	// 멤버 초기화 리스트 : 생성자 () 뒤에 : 을 적고 초기화 하는것
	Person(const std::string& n, int a) : name(n), age(a)   // 초기화
	{
//		name = n;
//		age = a;  // 대입
	}
};
int main()
{
	Person p("lee", 20);

	// 초기화 vs 대입
	// 1. primitive type 이면 "거의 동일하다."
	int n1 = 10; // 초기화
	int n2;
	n2 = 10; // 대입

	// 2. user define type
	std::string s1("lee");	// 생성자 1회 호출로 초기화되는 코드
							// string(const char* ) 생성자 호출

	std::string s2;			// 인자없는 생성자 호출
	s2 = "lee";				// s2.operator=("lee") 라는 함수 호출(대입연산자)
}