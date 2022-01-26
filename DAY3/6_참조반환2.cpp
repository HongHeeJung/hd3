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
Point& f2() // return by reference : 리턴용임시객체를 만들지 말라는것
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
//	f1(); // 임시객체가 반환
	f2(); // pt 자체가 반환

	f2().x = 10; // ok.. 결국 pt.x = 10

	std::cout << "---------------" << std::endl;
}

Point foo()
{
	Point p;
	return p; // 함수 호출이 끝날때 지역변수 p는 어떻게 될까요 ?
				// 1. 리턴을 위해 p의 내용을 복사한 임시객체를 만들어 놓고
				// 2. p 파괴(소멸자 호출)
				// 3. 리턴용 임시객체 반환
				// 4. 리턴용 임시객체는 함수호출이 끝나면 바로 파괴.

				// 결국 사용자가 만들지 않았지만 "객체가 생성/파괴"되고 있습니다.				
}
// 주의 !! 절대 지역변수는 참조 반환하지 마세요
Point& f4()
{
	Point p;
	return p; // 버그 입니다."undefined" 발생
}

