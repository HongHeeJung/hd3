// 4_nullptr2
#include <iostream>

void f(int   n) { std::cout << "int"   << std::endl; }	// 1
void f(void* n) { std::cout << "void*" << std::endl; }	// 2
void g(char* n) { std::cout << "char*" << std::endl; }

int main()
{
	f(0); // ?
}