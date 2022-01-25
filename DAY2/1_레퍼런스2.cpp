// 1_레퍼런스2
struct Rect
{
	int left;
	int top;
	int right;
	int bottom;
};
void foo(? r)
{

}
int main()
{
	Rect r = { 1,1,10,10 };
	foo(r);	// 조건 : foo는 절대로 r의 상태를 변경하면 안된다.
}