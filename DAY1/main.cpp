// square.h ���弼��
// extern "C" : C++ �����Ϸ�����
//			    �ش� �ɺ��� C����� �˷��ִ°�
//				name mangling �� ���� ����� ��
// extern "C" int square(int a);


#ifdef __cplusplus
extern "C" {
#endif

	int square(int a);

#ifdef __cplusplus
}
#endif

// �Լ� �����ε��� ���� ���� ���̴� �����Դϴ�.
// �׷���, ������ "name manling" ���� ������, C�� C++ �������� ȣȯ�� ����
// �� �ֽ��ϴ�. C/C++�� ��� �����ϴ� ����� ��ó�� ������ �մϴ�.








      

// square.c ���弼�� - �ݵ�� Ȯ���� .c�� �ϼ���
int square(int a)
{
	return a * a;
}

// main.c - �ݵ�� .c �� �ϼ���
#include "square.h"

int main()       
{
	square(3); // �� �����ΰ��� ??
			   // call ?square@@YAHH@z
}


// square.c  main.cpp ���� ������� �������غ�����