// 9_필드초기화 - 91 page
class Point
{
	int x = 0;
	int y = 0; // C++11 부터 이코드가 허용됩니다. 필드 초기화
public:
	Point() {}
	Point(int a)		: x(a)       {}
	Point(int a, int b) : x(a), y(b) {}
};
// 위처럼 만들면 컴파일러가 아래 처럼 변경하는 원리 입니다.
class Point
{
	int x;// = 0;
	int y;// = 0;
public:
	// 컴파일러가 아래 처럼 변경했습니다.
	Point()      : x(0), y(0) {}
	Point(int a) : x(a), y(0) {}
	Point(int a, int b) : x(a), y(b) {}
};

int main()
{
	Point p(1); // x = 1, y = 0
}