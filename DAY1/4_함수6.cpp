// 후위 반환 타입 - 37 page

// C/C++의 일반적인 함수 모양
int add1(int a, int b)
{
	return a + b;
}

// C++11부터 나온 새로운 함수 모양
// suffix return type 또는 trailing return type
// def add(x:int, y:int)->int :
auto add2(int a, int b) -> int
{
	return a + b;
}

int main()
{
	int n = add1(1, 2);
}