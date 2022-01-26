#include <string>

class Person		
{
	std::string name;
	int age;
public:
	// 사람을 생성할때는 꼭 초기화 해달라! - 안전하게 사용하자는 것
	Person(const std::string& n, int a ) : name(n), age(a) {}
};

class Student : public Person
{
	int id;
public:
	// 아래 처럼 하면 기반 클래스에 디폴트 생성자가 없기 때문에 
	// 컴파일 에러 입니다.
//	Student(int n) : id(n) {} // Student(int n) : Person(), id(n) {} //

	// Student 생성자 만들때 기반 클래스인 Person 이 요구하는
	// 이름과 나이도 받아야 합니다.
	Student(const std::string& name, int age, int n)
		: Person(name, age), id(n) {}
};

int main()
{
//	Student s(10);
	Student s("lee", 25, 11); // ok
}






