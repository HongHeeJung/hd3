// 21 page
int main()
{
	int x[5] = { 1,2,3,4,5 };

	// auto : 우변의 표현식을 보고 좌변 변수의 타입을 결정해 달라.
	//		 C++11 부터.. 컴파일 시간에 결정됨. 실행시 성능저하 없음
	auto n = x[0]; // 컴파일 하면 "int n = x[0]" 로 변경

	// decltype : () 안의 표현식의 타입을 조사해 달라.
	// auto     : 우변 표현식으로 결정
	// decltype : () 안의 표현식
	decltype(n) n1; // int n1

	auto a = x; // a의 타입은 ?
//	int a[5] = x; // 이렇게 결정했다면 에러였을것이다.
//	int* a = x;   // 이렇게 결정했다면 에러가 아니다.
					// 1. int a[5]    2. int* a

	decltype(x) d; // 1. int d[5]  3. int* d
//	int d[5]; 는 에러가 아니다. 그러므로 이 경우는 x의 정확한 타입인
						// int d[5]로 결정

	const int c = 10;
	auto a1 = c; // 1. const int    2. int ==> 답은 2번
}






