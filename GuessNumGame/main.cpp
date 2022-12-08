#include<iostream>
#include<cstdlib>
#include"menu.h"
#include"var.h"
#include"Game.h"
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
			system("cls");
			ShowChoice();
			cout << "请玩家输入您的选择：";
			cin >> option1;
			switch (option1)
			{
				//1为简单难度
			case 1:
				system("cls");
				while (mark5 == 'y')
				{
					EasyGame();
					cout << "是否继续游戏(y/n)：";
					cin >> mark5;
				}
				mark5 = 'y';
				break;
				//2为困难难度
			case 2:
				system("cls");
				while (mark6 == 'y')
				{
					HardGame();
					cout << "是否继续游戏(y/n)：";
					cin >> mark6;
				}
				mark6 = 'y';
				break;
			default:
				break;
			}
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
		default:
			cout << "输入异常！" << endl;
			cout << "输入任意字符重置！" << endl;
			cin >> mark4;
			break;
		}
	}
	return 0;
}