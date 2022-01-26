class Rect
{
	int x, y, w, h;
public:
	Rect(int x, int y, int w, int h) : x(x), y(y), w(w), h(h) {}

	int getArea() { return w * h; }
};
void f1(Rect r)
{
	int n = r.getArea();
}
int main()
{
	Rect r(1, 1, 3, 3);
	int n = r.getArea();
	f1(r);
}
// 122 page