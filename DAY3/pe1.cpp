// ���ۿ��� "PEView" �˻��� 1��° ��ũ, �̵��ؼ� 1��° ���α׷� �ٿ� ��������
// DAY3/debug/day3.exe    PEview ���� ���� ������
// pe1.cpp
#include <iostream>

int g1 = 0x11223344;
int g2 = 0x55667788;
								// .text(�Լ������ڵ�)
int main()
{
	printf("hello");            //  .data(���������ʱⰪ) 

	const char* s1 = "hello";   //  .rdata(�������)
	char s2[] = "hello";
}
// 32bit(x86) �� �����ϼ���.		//  .rsrc(GUI��� �޴����� ���ҽ�)
// g++ -m32
// WINDOWS �� �������� : PE(Portable executable)
// LINUX              : ELF(Executable Linking Format)