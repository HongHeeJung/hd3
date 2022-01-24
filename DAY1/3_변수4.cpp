// 25 page
struct Point
{
	int x;
	int y;
};
int main()
{
	Point pt = { 1,2 };
	int arr[3] = { 1,2,3 };

	// C++17 ���� ����ü�� �迭���� ���� ������ �Ʒ�ó�� �����մϴ�.
	// cl �ҽ��̸�.cpp /std:c++latest
	// "structure binding" �̶�� �����Դϴ�.
	auto [x, y] = pt;	// int x = pt.x
						// int y = pt.y
						// ���̽� : x, y = (1, 2)  ==> unpacking
//	int[x1, y1] = pt; // error. auto �� �˴ϴ�.

	// ����ü �� �ƴ϶� �迭�� ����
	auto [a1, b1, c1] = arr; // ��, ������ ��ġ�ؾ� �մϴ�.
//	auto [a2, b2] = arr; // error. ���� �ٸ�

}




