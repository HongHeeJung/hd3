// ���� ��ȯ Ÿ�� - 37 page

// C/C++�� �Ϲ����� �Լ� ���
int add1(int a, int b)
{
	return a + b;
}

// C++11���� ���� ���ο� �Լ� ���
// suffix return type �Ǵ� trailing return type
// def add(x:int, y:int)->int :
auto add2(int a, int b) -> int
{
	return a + b;
}

int main()
{
	int n = add1(1, 2);
}