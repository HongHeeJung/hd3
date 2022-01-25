#include <iostream>

// �ٽ� 1. �ʿ��� Ÿ���� ���� ���� ����.
// 2. ���¸� ��Ÿ���µ���Ÿ�� ���¸� ������ ������ �����ϴ� �Լ���
//	  ��� Ÿ���� ��������.
//    C++ ����ü�� �Լ��� �����Ҽ� �ִ�.
struct Rect
{
	int left;
	int top;
	int right;
	int bottom;

	int getArea()
	{
		return (right - left) * (bottom - top);
	}
	void draw()
	{
		std::cout << "draw rect" << std::endl;
	}
};

int main()
{
	Rect rc = { 1, 1, 10, 10 };
//	int area = getRectArea(rc);  // 1
	int area = rc.getArea(); // 2

	rc.draw();
}
