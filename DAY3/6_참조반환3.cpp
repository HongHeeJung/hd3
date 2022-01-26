// 6_참조반환3
#include <iostream>
// 왜.. 임시객체를 조심해야 하나요 ?
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



