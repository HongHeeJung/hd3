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
		std::cout << getTitle() << "�޴��� ���õ�" << std::endl;
		_getch(); 
	}
};
// PoupMenu : �����ϸ� �ٸ� �޴�(�����޴�) �� ������ �޴�

class PopupMenu
{
	std::string title;
	std::vector<MenuItem*> v;
public:
	PopupMenu(const std::string& s) : title(s) {}

	void addMenu(MenuItem* p) { v.push_back(p); }

	// �˾��޴��� �����Ҷ�.. - �� ������ �ٽ�
	void command()
	{

	}
};




int main()
{
	MenuItem m1("���󺯰�", 11);
	MenuItem m2("�ɼ�", 12);
	m2.command(); 
}