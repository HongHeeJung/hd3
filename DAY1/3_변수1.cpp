// 3_����1- 18page
#include <iostream>

struct Point
{
	int x;
	int y;
};
int main()
{
	struct Point p1; // C ��Ÿ��
	Point p2;        // C++, struct ��� �ȴ�.

	int n1 = 0b10;		// C++11, C11 ���� 2���� ǥ��� ����
	int n2 = 1'000'000;	// C++11 ���� �ڸ��� ǥ��� ����
						// �ᱹ �ּ��� ȿ��.
						// �����Ϸ��� ������ ���ͷ� ������ ' �� �����Ѵ�.
	// ���ο� Ÿ��
	bool b = true; // �Ǵ� false �Ǵ�, 0, 1 ��. ũ�� 1byte

	long long n = 0; // 64 ��Ʈ ���� ( 8 byte)
}