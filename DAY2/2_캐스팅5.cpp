int main()
{
	const double d = 3.14;

	// double �ּҸ� char* �� ���

	char* p1 = (char*)&d; // ok

	// �� ĳ������ C++�� �غ�����
//	char* p2 = reinterpret_cast<char*>(&d); // error. const ���žȵ�
//	char* p2 = const_cast<char*>(&d); // error.		
									  // ���� Ÿ���� const �Ӽ��� ����

	char* p2 = reinterpret_cast<char*>( const_cast<double*>(&d) );

	char* p3 = const_cast<char*>(
						reinterpret_cast<const char*>(&d));

	

}