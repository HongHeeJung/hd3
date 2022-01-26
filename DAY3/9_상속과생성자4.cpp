#include <string>

class Person		
{
	std::string name;
	int age;
public:
	// ����� �����Ҷ��� �� �ʱ�ȭ �ش޶�! - �����ϰ� ������ڴ� ��
	Person(const std::string& n, int a ) : name(n), age(a) {}
};

class Student : public Person
{
	int id;
public:
	// �Ʒ� ó�� �ϸ� ��� Ŭ������ ����Ʈ �����ڰ� ���� ������ 
	// ������ ���� �Դϴ�.
//	Student(int n) : id(n) {} // Student(int n) : Person(), id(n) {} //

	// Student ������ ���鶧 ��� Ŭ������ Person �� �䱸�ϴ�
	// �̸��� ���̵� �޾ƾ� �մϴ�.
	Student(const std::string& name, int age, int n)
		: Person(name, age), id(n) {}
};

int main()
{
//	Student s(10);
	Student s("lee", 25, 11); // ok
}






