#include <iostream>


class Car
{
	int speed;		// ��ü�� �Ѱ�, "�ν��Ͻ� �ʵ�(�������Ÿ)"��� ��� ���
public:
	static int cnt; // ��� (Car)��ü�� ����. "Ŭ���� �ʵ�(�������Ÿ)"��� �����

	Car() { ++cnt; }
	~Car() { --cnt; }
};
int Car::cnt = 0;

class Truck
{
	int speed;
public:
	static int cnt;
	Truck() { ++cnt; }
	~Truck() { --cnt; }
};
int Truck::cnt = 0;



int main()
{

}