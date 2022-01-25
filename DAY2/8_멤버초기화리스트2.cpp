// 멤버 초기화 리스트가 반드시 필요한 경우 1. 87page
class Test
{
	int a;
	int b;
	const int c;
public:
	Test(int x) : c(x)  // ok. 대입이 아닌 진짜 초기화
	{
//		c = x; // 초기화가 아닌 대입 입니다.
				// 상수는 대입될수 없습니다. error
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