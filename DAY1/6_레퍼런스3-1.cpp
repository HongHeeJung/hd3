#include <iostream>

//void f1(int arr[3])  // error. �迭�� ���� �ɼ� �����Ƿ�!!
void f1( int* p, int sz )
{
}
template<typename T, int N>  // ���ø��� ������ ����
inline int size(T (&arr)[N])
{
	return N;
}
int main()
{
	int x[3] = { 1,2,3 };
//	f1(&x[0], 3); // �迭�� 1��°����� �ּ� ����
//	f1(x, 3); 
	int n = size(x); // C++������ �迭�� ũ�⸦ ���ϴ� �Լ��� ����� �ֽ��ϴ�.

	for (auto n : x) // x�� ������ ���ϴ� ������ ���� �����մϴ�.
	{
	}
}