// 2_static_member_data1

#include <iostream>

// ��� 3. 



class Car
{
	int speed;
public:
	static int cnt; // static ��� ����Ÿ
					// = 0 ������ �ʱ�ȭ �ȵ˴ϴ�.

	Car() { ++cnt; }
	~Car() { --cnt; }
};
// static ��� ����Ÿ�� �ܺ� ������ �ʿ� �մϴ�. �ʱ�ȭ�� ���⼭.
int Car::cnt = 0;

int main()
{
	// static ��� ����Ÿ�� ��ü�� ���
	// �޸𸮿� ���� �մϴ�.
	std::cout << Car::cnt << std::endl;

	Car c1;
	Car c2;

	// static ��� ����Ÿ ���� ��� - 113 page
	// 1. Ŭ�����̸�::cnt  ==> ����!!
	// 2. ��ü�̸�.cnt     ==> �̷��� �ϸ� cnt�� static ���� �ƴ��� 
						   //  �˼� �����ϴ�(������)
	std::cout << Car::cnt << std::endl;
	std::cout << c1.cnt   << std::endl; 

	// �ٸ� ��ü���� ���(C#, java, swift ��)�� ���
	// "Ŭ���� �̸�" ���θ� static ����� ���� �����մϴ�.
}