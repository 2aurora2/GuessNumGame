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
		cout << "��ѡ��Ҫ���еĲ���(1/2/3/4)��";
		cin >> option;
		switch (option)
		{
		case 1:
			system("cls");
			ShowChoice();
			cout << "�������������ѡ��";
			cin >> option1;
			switch (option1)
			{
				//1Ϊ���Ѷ�
			case 1:
				system("cls");
				while (mark5 == 'y')
				{
					EasyGame();
					cout << "�Ƿ������Ϸ(y/n)��";
					cin >> mark5;
				}
				mark5 = 'y';
				break;
				//2Ϊ�����Ѷ�
			case 2:
				system("cls");
				while (mark6 == 'y')
				{
					HardGame();
					cout << "�Ƿ������Ϸ(y/n)��";
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
			cout << "���������ַ����ز˵���";
			cin >> mark2;
			break;
		case 3:
			system("cls");
			ShowGameRule();
			cout << "���������ַ����ز˵���";
			cin >> mark1;
			break;
		case 4:
			return 0;
		default:
			cout << "�����쳣��" << endl;
			cout << "���������ַ����ã�" << endl;
			cin >> mark4;
			break;
		}
	}
	return 0;
}