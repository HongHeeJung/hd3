// 8_���1 - 132 page
#include <string>

// ��� : ���� Ÿ���� Ȯ���ؼ� ���ο� Ÿ���� �����ϴ� ����
//        �ڵ� �ߺ��� ���ϼ� �ְ�
//		  ����� �پ��� ������ ���� �پ��� ������ Ȱ���Ҽ� �ִ�.
class Person				   // Base(���) class, super class, parent class
{
	std::string name;
	int age;
};
// C++    : class Student : public Person
// C#     : class Student : Person
// Python : class Student(Person)
// java   : class Student extends Person
class Student : public Person	// Derived(�Ļ�)class, sub class, child class
{
	int id;
};
class Professor : public Person
{
	int major;
};

int main()
{
	Stduent s;
	Professor p;
}