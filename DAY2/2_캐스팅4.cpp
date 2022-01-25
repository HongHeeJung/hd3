// 51page 아래 부분
int main()
{
	const int c = 10;

	int* p1 = &c;       // error
	int* p2 = (int*)&c; // ok

	int* p3 = static_cast<int*>(&c);      // error
	int* p4 = reinterpret_cast<int*>(&c); // error
	int* p5 = const_cast<int*>(&c); // ok
									// 상수성 제거를 위한 캐스팅
}
// 결론 : 용도에 맞게 캐스팅을 사용하자.
//	     그런데, 안전한 코드를 위해서는 "static_cast" 만 사용하자.
//	     그런데, 임베디드 분야는 "reinterpret_cast" 가 필요하긴 하다.!
// 50 page위에서 "dynamic_cast" 는 "상속문법을 알아야 합니다."