// 3_static_member_function1 - 114page
#include <iostream>

class Car
{
	int speed;
	static int cnt; 
public:
	Car() { ++cnt; }
	~Car() { --cnt; }

//	int get_count() { return cnt; } // �ν��Ͻ� �޼ҵ� 
								    // �ݵ�� ��ü�� �־�� ȣ�Ⱑ���ϴ�.
									// c1.get_count()

	static int get_count() { return cnt; } // ����(Ŭ����) �޼ҵ�
									// ��ü���� ȣ�Ⱑ���� ����Լ�(�޼ҵ�)
};
int Car::cnt = 0; // private�� �־ �ܺ� �ʱ�ȭ�� ���˴ϴ�.


int main()
{
	std::cout << Car::cnt << std::endl;

	Car c1;
	Car c2;


	std::cout << Car::cnt << std::endl;
	std::cout << c1.get_count() << std::endl;

}