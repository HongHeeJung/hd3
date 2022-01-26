#include <iostream>

struct Point
{
	int x, y;
	
	~Point() { std::cout << "~Point()" << std::endl; }
};

Point pt = { 1,2 };

Point f1() // return by value
{
	return pt;						
}
int main()
{
//	f1().x = 10; // 리턴용으로만들어진임시객체.x = 10
				 // 임시객체 특징
				 // 1. 등호의 왼쪽에 올수 없다.			
				 // 2. 함수 호출문장의 끝에서 파괴 된다.
	std::cout << "---------------" << std::endl;
	f1();
	std::cout << "---------------" << std::endl;
}


