// 8_����ʱ�ȭ����Ʈ1
#include <iostream>
#include <string>

class Person
{
	std::string name;
	int  age;
public:
	// ��� �ʱ�ȭ ����Ʈ : ������ () �ڿ� : �� ���� �ʱ�ȭ �ϴ°�
	Person(const std::string& n, int a) : name(n), age(a)   // �ʱ�ȭ
	{
//		name = n;
//		age = a;  // ����
	}
};
int main()
{
	Person p("lee", 20);

	// �ʱ�ȭ vs ����
	// 1. primitive type �̸� "���� �����ϴ�."
	int n1 = 10; // �ʱ�ȭ
	int n2;
	n2 = 10; // ����

	// 2. user define type
	std::string s1("lee");	// ������ 1ȸ ȣ��� �ʱ�ȭ�Ǵ� �ڵ�
							// string(const char* ) ������ ȣ��

	std::string s2;			// ���ھ��� ������ ȣ��
	s2 = "lee";				// s2.operator=("lee") ��� �Լ� ȣ��(���Կ�����)
}