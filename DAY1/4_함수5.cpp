// 함수 삭제 - 35 page

// 2개 정수의 최대 공약수 구하기
int gcd(int a, int b)
{
	return 0; // 구현은 35page 참고
}

//double gcd(double a, double b); // 의도적으로 선언만, 구현을 제공하지 않는다.
							// 사용시 링크에러를 내겠다는 의미

double gcd(double a, double b) = delete; // C++11에서 도입된
										// 함수 삭제라는 문법

int main()
{
	gcd(10, 4);
	gcd(3.3, 4.4);  // 선언만 있을때 
					// 컴파일러는 call "double 버전을 링커가 찾아서주소를채워달라"
					// 함수가 삭제되면
					// 컴파일 에러
}