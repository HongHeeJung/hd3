// 5_this4 - 129page
#include <iostream>

class Car
{
	int speed;
public:
	void set(int speed)
	{
		// this Ȱ�� 1. ������� ��Ȯ�� �ϰ� ������
		// speed ��� �ϸ� ��������(����)�� speed�Դϴ�.
		// ��� ���� ��Ȯ�� �Ϸ���
		this->speed = speed;
	}
	// this Ȱ�� 2. this�� ��ȯ�ϴ� �Լ� - �߿�
	Car* go() { return this; }
	Car& go2() { return *this; } // ==> 129 page �Ʒ� �ڽ�
};
int main()
{
	Car c;
	c.set(10);
	// this�� ��ȯ�ϴ� �Լ��� �Լ� ȣ���� ���������� �Ҽ� �ֽ��ϴ�.
	c.go()->go()->go()->go();
	c.go2().go2().go2().go2();

	std::cout << "A" << "B" << "C"; // �� �Ʒ��� �����ϴ�.
//	std::cout.operator<<("A").operator<<("B").operator<<("C");
}