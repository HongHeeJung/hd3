// 함수 템플릿 - 33 page

/*
int square(int a)
{
	return a * a;
}
double square(double a)
{
	return a * a;
}
*/
// 함수의 구현이 동일(유사)한 함수가 여러개 필요 하면
// 함수를 만들지 말고, 함수를 생성할때 사용할 "틀(template)"을 만들자

template<typename T>  
T square(T a)
{
	return a * a;
}
int main()
{
//	square<int>(3);		// 컴파일러가 틀을 사용해서 int square(int)함수 생성
//	square<double>(3.4);// 컴파일러가 틀을 사용해서 int square(double)함수 생성

	// 타입 파라미터를 전달하지 않으면 함수 인자로 보고 컴파일러가 추론합니다.
	square(3);		// square<int>(3) 과 완벽히 동일합니다.
	square(3.4);
}

// Code Bloat(코드 폭팔)
// 템플릿 사용시 컴파일러가 너무 많은 타입에 대해서
// 함수(클래스)를 생성해서 목적코드(실행파일)의 크기가 커지는 현상
// 메모리가 부족한 환경에서는 주의!!!