// 39 page
int foo()
{
	return 0;
}
int main()
{
	int ret = foo();
	if (ret == 0)
	{
	}
	//------------------------
	// C++17 부터 "init if" 라는 구문 등장
	if (int ret = foo(); ret == 0)
	{
	}
	switch (int n = foo(); n)
	{
	case 1: break;
	case 2: break;
	}
	// "초기화 구문을 가진 제어문" - 39page
}






