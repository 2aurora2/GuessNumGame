#include<iostream>
#include<cstdlib>
#include"menu.h"
#include"var.h"
using namespace std;
int main(void)
{
	while (1)
	{
		system("cls");
		Menu();
		cout << "请选择要进行的操作(1/2/3/4)：";
		cin >> option;
		switch (option)
		{
		case 1:
			break;
		case 2:
			system("cls");
			SetGameDifficulty();
			cout << "输入任意字符返回菜单：";
			cin >> mark2;
			break;
		case 3:
			system("cls");
			ShowGameRule();
			cout << "输入任意字符返回菜单：";
			cin >> mark1;
			break;
		case 4:
			return 0;
		}
	}
	return 0;
}