#include <cstdio>

template<typename T>
T square(T a)
{
	return a * a;
}
int main()
{
	square(3);		
//	square(3.4);

//	printf("%p\n", &square); // �ɱ�� ?? �� ������ ������ error
							// square �� �޸𸮿� �����ϴ� �Լ��� �ƴմϴ�.
							// �����Ͻð��� �����Ϸ��� ����ϴ� "Ʋ"�Դϴ�.
							// �޸𸮿� ���̴� ���� �ƴϹǷ� �ּҴ� ���Ҽ������ϴ�.
	
	printf("%p\n", &square<int> ); // ok
							// square<int> �� Ʋ�� ����ؼ� ���� �Լ��Դϴ�.
							// �޸𸮿� �����Ƿ� �ּҸ� ���Ҽ� �ֽ��ϴ�.
}
// C++���� �����߿��Ѱ� : ��ü���� + generic(template)

// 3:05�п� �̾����ϴ�.
