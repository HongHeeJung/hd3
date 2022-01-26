// 8_상속1 - 132 page
#include <string>

// 상속 : 기존 타입을 확장해서 새로운 타입을 설계하는 문법
//        코드 중복을 줄일수 있고
//		  상속의 다양한 문법을 배우면 다양한 장점을 활용할수 있다.
class Person				   // Base(기반) class, super class, parent class
{
	std::string name;
	int age;
};
// C++    : class Student : public Person
// C#     : class Student : Person
// Python : class Student(Person)
// java   : class Student extends Person
class Student : public Person	// Derived(파생)class, sub class, child class
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