#include <iostream>
// 7_������1
class Bike
{
private:
	int speed;
	int gear;
public:
	// ������ : ��ü�� �����ϸ� �ڵ����� ȣ��Ǵ� �Լ�
	//    Ư¡ : Ŭ���� �̸��� ����     
	//		    ��ȯŸ���� ���� �ʰ�, ��ȯ�Ҽ��� ����.
	//		    ���ڴ� �־ �ǰ� ��� �ȴ�.
	Bike()
	{
		std::cout << "Bike()" << std::endl;
		speed = 20;
		gear = 10;
	}
};
int main()
{
//	Bike b = { 30, 10 }; // ����Ÿ�� public �� ������ �̷��� �ʱ�ȭ�����մϴ�.
					     // �ᱹ, class �� struct �� (����)�����ϹǷ�
						// ������, private �� �ִٸ� ����
	Bike b;
//	b.init();
}

// 1:55 �п� �����մϴ�.