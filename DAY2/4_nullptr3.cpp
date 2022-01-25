// 4_nullptr2
#include <iostream>

void f(int   n) { std::cout << "int" << std::endl; }	// 1
void f(void* n) { std::cout << "void*" << std::endl; }	// 2
void g(char* n) { std::cout << "char*" << std::endl; }

int main()
{
	// �Ʒ� �ڵ尡 ���� �Ϻ��� C++ �����Ϸ��� ����� �ִ� ����Դϴ�.
#ifdef __cplusplus
	#define NULL 0
#else 
	#define NULL (void*)0
#endif

	f(NULL); // ��ó�� �Ǿ� ������ �׳� 0�̹Ƿ� 1�� ȣ��.
			 // �ᱹ, NULL �� ������ 0���� ����ϰ� �;�����..
			 // ����!!

	g(NULL); // ok.. 

	// NULL �� �ƴ� ��¥ ������ 0 �� �ʿ��ߴ�.
	// �׷��� nullptr�� ���� ����
	f(nullptr);
	g(nullptr);
}
// �� �ҽ� �ٽ� : NULL ����� ���� ������.