#include <iostream>
#include <vector>

class Test
{
	int value = 0;
public:
	// 동일이름의 상수/비상수 멤버함수를 제공할수 있습니다. 124 page 중간
	int& foo()       { std::cout << "foo" << std::endl; return value; }		// 1
	int  foo() const { std::cout << "foo const" << std::endl; return value;}	// 2
};
int main()
{
	const Test ct;
	ct.foo();	// 2번만 가능. 상수객체는 상수 멤버 함수만 호출 가능.

	ct.foo() = 10; // error. 값 반환

	Test t;
	t.foo(); // 1번 호출, 1번이 없으면
			 // 2번 호출
	t.foo() = 10; // ok


	// 상수객체와 비상수객체에 대해서 foo 가 하는 일이 동일하면 - 2번만 만드세요
	//                                    하는 일이 다르며 위처럼 2개 만드세요
	std::vector<int>       vv = { 1,2,3 };
	const std::vector<int> cv = { 1,2,3 };

	// 다음중 안되야 하는 것은 ?
	int n1 = vv[0]; // 1
	int n2 = cv[0]; // 2
	vv[0] = 10;		// 3
//	cv[0] = 10;		// 4. error 나와야 하고, error 나옵니다.
} 