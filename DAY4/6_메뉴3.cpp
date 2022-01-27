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

	}
};




int main()
{
	MenuItem m1("색상변경", 11);
	MenuItem m2("옵션", 12);
	m2.command(); 
}