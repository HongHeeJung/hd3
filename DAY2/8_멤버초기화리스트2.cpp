// ��� �ʱ�ȭ ����Ʈ�� �ݵ�� �ʿ��� ��� 1. 87page
class Test
{
	int a;
	int b;
	const int c;
public:
	Test(int x) : c(x)  // ok. ������ �ƴ� ��¥ �ʱ�ȭ
	{
//		c = x; // �ʱ�ȭ�� �ƴ� ���� �Դϴ�.
				// ����� ���Եɼ� �����ϴ�. error
	}
};
int main()
{
	Test t(10);

	int n = 10;
	const int c1 = 10;
	const int c2 = n; // ok...
	const int c3(n); //  ok
}