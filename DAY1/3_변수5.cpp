#include <iostream>
#include <string>
// 26page
int main()
{
	// C��� ���ڿ� : char [] �Ǵ� char* - �ʹ� �����մϴ�.
	char s1[] = "ABCD";
	char s2[5];

	s2 = s1; // error. strcpy() �ʿ�
	if (s2 == s1) {} // error �� �ƴ�����, �ּ� ��, �׻� false
					// strcmp(s2, s1) == 0

	std::string s3 = "ABCD";
	std::string s4;

	s4 = s3;		// ���԰���
	s4 = s4 + s3;	// ������ ����

	if (s4 == s3) {}// �̷��� �񱳵� ����

	std::cout << s4 << std::endl; // ��µ� ����.

	// ��, s3, s4 �� int Ÿ��ó�� ��밡���մϴ�.
	// "AB" * 3 => "ABABAB"
	// "decorator", "descriptor"
	// @static
}




