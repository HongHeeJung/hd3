// 3_new - 52page
#include <iostream>
#include <cstdlib>   // malloc �� ����. vc�� ��� �Ǳ��մϴ�.

int main()
{
	// C ��Ÿ���� ���� �޸� �Ҵ�
	int* p1 = (int*)malloc(sizeof(int) * 10);
	free(p1);

	// C++ ��Ÿ���� ���� �޸� �Ҵ�
	int* p2 = new int;
	delete p2;

	int* p3 = new int[10];  // �迭 ��� �Ҵ���
	delete[] p3;			// "delete[]" �� ���� �մϴ�.
}