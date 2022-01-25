// 6_접근지정자 - 74page

// 접근지정자 : 멤버데이타를 외부에서 직접 접근하면 객체의 상태가 불안해 질수있다
//			   데이타를 private 영역에 놓아서 외부에 잘못된 사용을 막는다.

// 캡슐화(encapsulation), 정보 은닉(information hiding)

// 용어 정리
// 객체(Object) : 세상에 존재하는 모든 사물
//				 프로그램에서 변수, 함수등도 모두 Object!!! 지만
// 관례적으로 
// int  n; // "변수" 라고 합니다. 
// Bike b; // "객체(object)" 라는 용어를 사용합니다.


// C++에서 struct vs class 차이점은 아래 단 한가지 입니다.
// struct : 접근지정자 생략시 public 이 디폴트
// class  : 접근지정자 생략시 private 이 디폴트

//struct Bike
class Bike
{
//private:		// private 접근 지정자
				// 멤버 함수에서만 접근할수 있고 외부에서는 접근할수없다
	int speed;
	int gear;
public:			// public 접근 지정자
				// 외부에서 접근 가능하다.
	void setGear(int value)
	{
		if ( value > 0 )    // 인자값의 유효성을 확인후에
			gear = value;	// 상태를 변경한다.
	}
};
int main()
{
	Bike b;
//	b.speed = 30; // error
//	b.gear = -10; // error
	b.setGear(-10); // ok. 하지만 잘못된 값이므로 상태 변경안됨
}