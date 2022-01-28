// 1�� ����
// 2_������������1 - 182 
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}

	// ����� ���� operator+() �Լ�
	// + �� ���׿����� ������ "��� �Լ��� ������ ���ڴ� �Ѱ��� ������˴ϴ�."
	Point operator+(const Point& p)
	{
		std::cout << "member operator+" << std::endl;
		Point temp(x + p.x, y + p.y);
		return temp;
	}
};
int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	Point p3 = p1 + p2;  // p1.operator+(p2)  
}


