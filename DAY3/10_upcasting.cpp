// 10_upcasting - 140 page
#include <iostream>

class Animal
{
	int age;
public:
	void cry() {}
};
class Dog : public Animal
{
	int color;
public:
	void run() {}
};
int main()
{
	Dog dog;
	Dog*	p1 = &dog; // ok
//	int*	p2 = &dog; // error
	Animal* p3 = &dog; // ok. upcasting
			
	// �ٽ� 1. ��� Ŭ���� �����ͷ� �Ļ�Ŭ���� ��ü��
	//         ����ų�� �ִ�.

	// �ٽ� 2. ������, Animal* p �� ����ϸ� �����Ϸ���
	//			p�� ����Ű�� ���� Animal �̶�� �����ϹǷ�
	//			Dog ���� �߰��� ����� �����Ҽ� �����ϴ�
	p3->cry(); // ok 
//	p3->run(); // error

	// �ٽ� 3. Dog ������ ����� �����Ϸ��� ĳ�����ϸ� �˴ϴ�.
	//		��, �̰�� p3�� ����Ű�� ���� Dog �� Ȯ���ؾ� �մϴ�.
	//		Dog �� �ƴϸ� runtime error �� �߻��Ҽ� �ֽ��ϴ�.
	static_cast<Dog*>(p3)->run(); // ok

}




