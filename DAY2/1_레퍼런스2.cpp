// 1_���۷���2
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
	foo(r);	// ���� : foo�� ����� r�� ���¸� �����ϸ� �ȵȴ�.
}