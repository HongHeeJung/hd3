// 9_��Ӱ�������1 - 135 page
#include <iostream>

class Base
{
	int data1;
public:
//	Base()      {  }
	Base(int a) {  }
	~Base()     {  }
};
class Derived : public Base
{
	int data2;
public:
	// ��� Ŭ������ "����Ʈ �����ڰ� ������" �Ʒ� ó���� ����� ������ �����Դϴ�.
	// �����Ϸ��� ������ �ڵ�(������ �ּ�)�� ������ ������.
//	Derived()      {} // Derived()      : Base() {}
//	Derived(int a) {} // Derived(int a) : Base() {}
	~Derived()     {}

	// �ذ�å�� ����ڰ� ���� ��� Ŭ���� �����ڸ� ȣ���ϴ� �ڵ带 �����ؾ��մϴ�.
	// ���̽� �Ͻź��� �Ʒ� �ڵ尡 "super.__init__()" �Դϴ�.
	Derived()      : Base(0) {}
	Derived(int a) : Base(a) {}
};



int main()
{
	//	Derived d1;
	Derived d1(5);
}

// 4:10 �п� �̾����ϴ�