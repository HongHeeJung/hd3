// 7_�������Լ�1 - 119 page
#include <iostream>

class Point
{
public:
	int x;
	int y;
	Point(int x, int y) : x(x), y(y) {}

	void set(int a, int b)
	{
		x = a;
		y = b;
	}
	// ��� ��� �Լ� : ��� �Լ��ȿ��� ��������͸� �������� �������̶��
	//					�����Ϸ����� �˷� �ִ°�
	//					��� ���� �����ϴ� �ڵ尡 ������ ����!
	// const member function
	void print() const  
	{
//		x = 10; // error
		std::cout << x << ", " << y << std::endl; 
	}
};
int main()
{
	const Point pt(1, 2);

	pt.x = 10;      // error. public �� ������ �����ü�̹Ƿ�
	pt.set(10, 20); // error
	pt.print();     // ������ �Լ��� �ƴϸ� error.
					// ��� ��� �Լ� ���ٸ� ok

	// "��� ��ü�� ��� ����Լ��� ȣ���Ҽ� �ִ�." 121 page �Ʒ� �κ�
}


