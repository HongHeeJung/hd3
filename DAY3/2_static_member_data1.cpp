// 2_static_member_data1

#include <iostream>
// Car ��ü�� ��� �����Ǿ����� �����ϰ� �ʹ�.
// ��� 1. ��� ����Ÿ ���
//       => ��� ����Ÿ�� ��ü�� �Ѱ�(110page �׸�)�� �����ȴ�.
//       => ��ü�� ���� �ľ� ����!
class Car
{
	int speed;
public:
	int cnt = 0;
	Car()  { ++cnt; }
	~Car() { --cnt; }
};
int main()
{
	Car c1;
	Car c2;

	std::cout << c1.cnt << std::endl;
}