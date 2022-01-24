#include <iostream>

template<typename T1, typename T2>
//?? add(T1 a, T2 b)   // ?? �� ��� �ؾ� �ұ�� ?
//decltype(a + b) add(T1 a, T2 b) // �׷���.. �� ���ڵ尡 �����ϱ�� ?
								// a, b �� �������� ����ϴ� ǥ����̶� ����

//auto add(T1 a, T2 b) -> decltype(a + b) // ok C++11��Ÿ��
auto add(T1 a, T2 b)    // C++14 ���ʹ� ���� ��ȯ Ÿ���ڵ� ������ ����
{
	return a + b;
}


int main()
{
	std::cout << add<int, double>(1, 2.2) << std::endl; // ��Ȯ�� ǥ���

	std::cout << add(1, 2.2) << std::endl; // Ÿ�� ��������. 
										// �Լ� ���ڷ� Ÿ�� ����


//	a = 10; // error. ������ �������� ���
//	int a;
//	a = 20; // ok

}