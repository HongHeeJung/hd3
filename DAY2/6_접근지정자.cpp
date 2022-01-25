// 6_���������� - 74page

// ���������� : �������Ÿ�� �ܺο��� ���� �����ϸ� ��ü�� ���°� �Ҿ��� �����ִ�
//			   ����Ÿ�� private ������ ���Ƽ� �ܺο� �߸��� ����� ���´�.

// ĸ��ȭ(encapsulation), ���� ����(information hiding)

// ��� ����
// ��ü(Object) : ���� �����ϴ� ��� �繰
//				 ���α׷����� ����, �Լ�� ��� Object!!! ����
// ���������� 
// int  n; // "����" ��� �մϴ�. 
// Bike b; // "��ü(object)" ��� �� ����մϴ�.


// C++���� struct vs class �������� �Ʒ� �� �Ѱ��� �Դϴ�.
// struct : ���������� ������ public �� ����Ʈ
// class  : ���������� ������ private �� ����Ʈ

//struct Bike
class Bike
{
//private:		// private ���� ������
				// ��� �Լ������� �����Ҽ� �ְ� �ܺο����� �����Ҽ�����
	int speed;
	int gear;
public:			// public ���� ������
				// �ܺο��� ���� �����ϴ�.
	void setGear(int value)
	{
		if ( value > 0 )    // ���ڰ��� ��ȿ���� Ȯ���Ŀ�
			gear = value;	// ���¸� �����Ѵ�.
	}
};
int main()
{
	Bike b;
//	b.speed = 30; // error
//	b.gear = -10; // error
	b.setGear(-10); // ok. ������ �߸��� ���̹Ƿ� ���� ����ȵ�
}