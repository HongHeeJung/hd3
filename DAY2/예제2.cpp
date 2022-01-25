#include <iostream>
#include <stdlib>

int main()
{
	// 사용자가 -1을 입력할때 까지 입력받아야 한다.
	// 그런데, 입력값은 반드시 보관하고 있어야 한다.
	int count = 0; // 입력된 갯수
	int size = 5;  // 버퍼 크기
	int n = 0;

	int* buff = new int[size];

	while (1)
	{
		std::cin >> n;
		if (n == -1) break;

		buff[count] = n;
		++count;

		if (count == size)
		{
			int* temp = new int[size + 5];

			memcpy(temp, buff, sizeof(int) * size);

			delete[] buff;
			buff = temp;
			size = size + 5;
		}
	}
	std::cout << "입력된 갯수 : " << count << std::endl;

	for (int i = 0; i < count; i++)
		std::cout << buff[i] << std::endl;

	delete[] buff;
}

// 4:10 분에 이어집니다.




