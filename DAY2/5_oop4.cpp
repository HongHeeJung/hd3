#include <iostream>

struct Rect
{
	// 멤버 데이타(다른 언어는 필드(field) 라고도 합니다)
	int left;
	int top;
	int right;
	int bottom;

	// 멤버 함수(메소드(method) 라고도 합니다.)
	int getArea() // int getArea(Rect* this)
	{
		return (right - left) * (bottom - top); // (this->right - this->left)
	}
	// 결론 : 모든 멤버함수는 컴파일되면 인자로 Rect* 가 추가되는 원리 입니다
	void draw()  // void draw(Rect* this)
	{
		std::cout << "draw rect" << std::endl;
	}
};
int main()
{
	Rect rc1 = { 1, 1, 10, 10 };
	Rect rc2 = { 2, 2, 5, 5 };

	rc1.getArea(); // C++ 컴파일러가
				// 객체를 함수 인자 처럼 전달해 줍니다.
				// getArea(&rc1)
}
