// C++ : private, protected, public
// �ٸ� ���� : �� 3��  + internal, package ���� ������ �ֱ⵵ �մϴ�.

/*
class Car:
	speed = 0
	_speed = 0
	__speed = 0   => �����Ͻ� Car_speed �� ����

c = Car()

print( c.__dic__)
c.__speed = 0 # error
*/

class Base
{
private:   int a; // �ڽ��� ��� �Լ��� ���� ���� + friend �Լ�
protected: int b; // �ڽ��� ��� + �Ļ�Ŭ���� ��� �� ���� ���� + friend
public:    int c; // ������ ���� ����.
};
class Derived : public Base
{
public:
	void f()
	{
		a = 10; // error. ��� Ŭ������ private ����� �Ļ�Ŭ�������� ���� �ȵȴ�.
				//         ���� �Ϸ��� ��� Ŭ���� �Լ��� ����ؾ� �Ѵ�.
		c = 10; // ok
	}
};
// Derived d;  ==> a, c �� �޸𸮿� ������ "Derived �Լ��� ���� �ȵ�"

int main()
{
	Base base;
	base.a = 10; // error
	base.c = 10; // ok
}
// 134page