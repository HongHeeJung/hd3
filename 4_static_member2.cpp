#include <iostream>

// C++11
class Car
{
	int speed = 0;		// �ν��Ͻ� �������Ÿ�� C++11 ���� �ʵ��ʱ�ȭ ����
//	static int cnt = 0; // error. static ��� ����Ÿ�� �ݵ�� �ܺ� ���𿡼�
						// �ʱ�ȭ �ؾ� �Ѵ�.
	static int cnt;	// �ݵ�� �ܺ� ���� �ʿ��ϰ�. �ʱ�ȭ�� �ܺμ��𿡼�.
					// java, C# �� �ܺ� ���� �ʿ� �����ϴ�.
public:
	Car() { ++cnt; }
	~Car() { --cnt; }

	static int get_count() { return cnt; } 
};
int Car::cnt = 0; 

// C++17 ���� "inline static" �̶�� ���� ����
class Car
{
	int speed = 0;		
	inline static int cnt = 0; // �ܺ� ���� �ʿ� ����, ���⼭ �ʱ�ȭ�� ����
public:
	Car() { ++cnt; }
	~Car() { --cnt; }

	static int get_count() { return cnt; }
};



int main()
{


}