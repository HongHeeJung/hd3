// 5_���1 - 38 page
#include <iostream>

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++)
	{
		std::cout << x[i] << std::endl;
	}
	// C++11�� ���ο� for�� - "range for"
	// ���̽� : for n in x:
	int i = 0;
	for (auto n : x)   
	{
		++i;
		std::cout << n << std::endl; 
	}

	// ���ڿ��� ���, ���ڿ� �迭 �Ǵ� string �� ����. char* �� �ȵ�
	char s[] = "ABCDEFG";		// range for ����
//	std::string s = "ABCDEFG";	// range for ����
//	const char* s = "ABCDEFG";  // range for �ȵ�

	for (auto c : s)
	{
		std::cout << c << std::endl;
	}
}


