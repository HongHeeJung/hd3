#include <iostream>
#include <vector>
#include <string>
#include <conio.h>

class MenuItem
{
	std::string title;
	int id;
public:
	MenuItem(const std::string& s, int n) : title(s), id(n) {}

	std::string getTitle() const { return title; }

	void command()
	{
		std::cout << getTitle() << "메뉴가 선택됨" << std::endl;
		_getch(); 
	}
};
// PoupMenu : 선택하면 다른 메뉴(하위메뉴) 가 열리는 메뉴

class PopupMenu
{
	std::string title;
	std::vector<MenuItem*> v;
public:
	PopupMenu(const std::string& s) : title(s) {}

	void addMenu(MenuItem* p) { v.push_back(p); }

	// 팝업메뉴를 선택할때.. - 이 예제의 핵심
	void command()
	{
		while (1)
		{
			system("cls"); // 화면 지우기

			int sz = v.size(); // 하위 메뉴 갯수

			for (int i = 0; i < sz; i++)
			{
				std::cout << i + 1 << ". " << v[i]->getTitle() << std::endl;
			}
			std::cout << sz + 1 << ". 종료" << std::endl;

			std::cout << "메뉴를 선택해 주세요 >>";
			int cmd;
			std::cin >> cmd;

			if (cmd < 1 || cmd > sz + 1) // 잘못된 입력
				continue;


			if (cmd == sz + 1) // 종료 메뉴 선택시
				break;         // 또는 return 





			// 선택된 메뉴를 실행하려면 ?? 
			v[cmd - 1]->command();
		}
	}
};
int main()
{
	MenuItem m1("색상변경", 11);
	MenuItem m2("옵션", 12);
	
	PopupMenu pm("카메라메뉴");
	pm.addMenu(&m1);
	pm.addMenu(&m2);
	pm.command(); // 팝업메뉴 선택.
}