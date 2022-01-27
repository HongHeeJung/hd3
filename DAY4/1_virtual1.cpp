// 1_virtual1 - github.com/codenuri/hd3 �� �ҽ� �ֽ��ϴ�
#include <iostream>

class Animal
{
public:
	void cry() { std::cout << "Animal cry" << std::endl; } // 1
	virtual void cry2() { std::cout << "Animal cry2" << std::endl; } // 1
};
class Dog : public Animal
{
public:
	// override : ��� Ŭ���� ��� �Լ��� �Ļ� Ŭ������ �ٽ� ����� ��.
	// overloading ���� �ٸ��ϴ� (square(int), square(double))
	void cry() { std::cout << "Dog cry" << std::endl; }   // 2
	virtual void cry2() { std::cout << "Dog cry2" << std::endl; }   // 2
};
int main()
{
	Animal a; a.cry(); // 1
	Dog    d; d.cry(); // 2

	Animal* p = &d;

	if (����ڰ��Է��Ѱ� == 1) p = &a;

	// �����Ϸ��� p�� ����Ű�� ���� ��ü�� �������� �˼� ����.
	p->cry();  // 1 ? 2 
				// �������δ� Dog cry �� �´�
				// �׷���, C++ ������ Animal Cry
	p->cry2();
}
// p->cry() �� � �Լ��� �����Ұ��ΰ� ? 
// �Լ� ���ε� ����. ( ���� 161 page)

// 1. static binding : �����Ϸ��� ������ �ð��� �Լ� ȣ���� ����.
//						�����Ϸ��� p�� Ÿ���� "Animal*" ��� �͸� �˰�
//						���� p�� ����Ű�� ��ü�� ���������� �˼� ����.
//						Animal cry() ȣ��.
// ������. �������� �ʴ�. C++ �⺻ ��å, C#


// 2. dynamic binding : ������ �ÿ� p�� ����Ű�� �޸𸮸� �����ϴ� ���� �ڵ� ����
//					����� p�� ����Ű�� ���� ��ü�� �������� �Լ� ȣ�� ����
//					Dog�� ��ü�־��ٸ� Dog cry() ȣ��
// ������. �����̴�. java, python, swift �� ��κ��� ��ü���� ���
//					C++�� C#�� virtual Ű����. 