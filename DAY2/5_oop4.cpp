#include <iostream>

struct Rect
{
	// ��� ����Ÿ(�ٸ� ���� �ʵ�(field) ��� �մϴ�)
	int left;
	int top;
	int right;
	int bottom;

	// ��� �Լ�(�޼ҵ�(method) ��� �մϴ�.)
	int getArea() // int getArea(Rect* this)
	{
		return (right - left) * (bottom - top); // (this->right - this->left)
	}
	// ��� : ��� ����Լ��� �����ϵǸ� ���ڷ� Rect* �� �߰��Ǵ� ���� �Դϴ�
	void draw()  // void draw(Rect* this)
	{
		std::cout << "draw rect" << std::endl;
	}
};
int main()
{
	Rect rc1 = { 1, 1, 10, 10 };
	Rect rc2 = { 2, 2, 5, 5 };

	rc1.getArea(); // C++ �����Ϸ���
				// ��ü�� �Լ� ���� ó�� ������ �ݴϴ�.
				// getArea(&rc1)
}
