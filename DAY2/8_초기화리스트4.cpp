#include <iostream>

class Point
{
public:
	int x;
	int y;

	Point() : y(0),  x(y) {}	// undefined(������ ����)
							// "ǥ�� ���������� ������� ����� �Ǿ��ְ�
							// ����ϸ� ��� �ȴ� ��� ���� ������ ���°�"
							// �����Ϸ����� ������ �ٸ���.
							// 88p ���� �Ʒ�!
					
};
int main()
{
	Point p1;

	std::cout << p1.x << std::endl; // ?
	std::cout << p1.y << std::endl; // ?
}

// 3:05 �п� �̾����ϴ�.