// 6_������ȯ3
#include <iostream>
// ��.. �ӽð�ü�� �����ؾ� �ϳ��� ?
class Counter
{
public:
	int value = 0;

//	Counter increment()
	Counter& increment()
	{
		++value;
		return *this;
	}
	~Counter() { std::cout << "~Counter()" << std::endl; }
};
int main()
{
	Counter c;
	c.increment().increment().increment();
	std::cout << c.value << std::endl;
}



