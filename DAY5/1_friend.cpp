// github.com/codenuri/hd3 에서 DAY5.zip 받으셔서 압축 풀고 VC에서 열어 두세요

// "X64", "Debug"

// VC 에서 프로젝트메뉴 ==> 속성 메뉴 선택후

// 플랫폼 도구 : 사용하시는 VC 버전(2019)로 변경하세요
// Windows SDK 버전 : 설치되어 있는 버전으로 설정하세요


// 1_friend.cpp - 75 page
class Bike
{
	int gear;
public:

	// friend 함수 : 멤버 함수는 아니지만, private 멤버에 접근하는것을
	//				허용해 달라.
	// 1. 멤버함수 로 하면 되는데 왜 일반함수로 만드나요 ?
	//     => 멤버 함수로 만들수 없을때가 있습니다.(연산자 재정의)
	// 
	// 2. getGear(), setGear()함수를 만들면 되지 않나요 ?
	//	   => 모든 함수에서 접근을 허용하게 됩니다.
	//     => 특정 함수에서만 접근 허용하고 싶을때가 있습니다.
	friend void fixBike();
};

void fixBike() // 멤버 함수 아님..
{
	Bike b;
	b.gear = 10;
}

int main()
{
	fixBike();
}

