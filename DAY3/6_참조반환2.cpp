#include <iostream>

struct Point
{
	int x, y;
	
	~Point() { std::cout << "~Point()" << std::endl; }
};

Point pt = { 1,2 };

Point f1() // return by value
{
	return pt;						
}
int main()
{
//	f1().x = 10; // ���Ͽ����θ�������ӽð�ü.x = 10
				 // �ӽð�ü Ư¡
				 // 1. ��ȣ�� ���ʿ� �ü� ����.			
				 // 2. �Լ� ȣ�⹮���� ������ �ı� �ȴ�.
	std::cout << "---------------" << std::endl;
	f1();
	std::cout << "---------------" << std::endl;
}


