#include <iostream>
#include <vector> // �̹� C++ ǥ�ؿ� vector(�����迭�� vector��� �մϴ�.)

int main()
{
	std::vector<int> v(5); // 5�� �迭
	v[0] = 10; // ������ ������ �������� ��¥ �迭�� ���� ����
	v.resize(7);

	std::cout << v[0] << std::endl;

	std::vector<int> v2; // ũ�Ⱑ 0
	v2.push_back(1);
	v2.push_back(5); // �ڵ� ���� �˴ϴ�.

	std::cout << v2.size() << std::endl;
}