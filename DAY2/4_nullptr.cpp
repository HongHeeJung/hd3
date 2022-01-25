// 4_nullptr - 54
int main()
{
	//	int* p = 10; // error. 10은 정수이지 포인터가 아닙니다.

	int  n1 = 0;
	int* p1 = 0; // 0은 정수지만 포인터로 암시적 형변환 됩니다.
				 // 컴파일러에 의해 특별하게 처리됩니다.

	// C++11부터 포인터 0에 해당하는 nullptr 을 만들었습니다.
	int* p2 = nullptr; // C++11 부터 이코드 권장
//	int  n2 = nullptr; // error
}

// 11:00 에 시작 합니다.