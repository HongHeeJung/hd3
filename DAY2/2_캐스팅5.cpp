int main()
{
	const double d = 3.14;

	// double 주소를 char* 에 담기

	char* p1 = (char*)&d; // ok

	// 위 캐스팅을 C++로 해보세요
//	char* p2 = reinterpret_cast<char*>(&d); // error. const 제거안됨
//	char* p2 = const_cast<char*>(&d); // error.		
									  // 동일 타입의 const 속성만 제거

	char* p2 = reinterpret_cast<char*>( const_cast<double*>(&d) );

	char* p3 = const_cast<char*>(
						reinterpret_cast<const char*>(&d));

	

}