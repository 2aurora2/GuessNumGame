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
		cout << "��ѡ��Ҫ���еĲ���(1/2/3/4)��";
		cin >> option;
		switch (option)
		{
		case 1:
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
		}
	}
	return 0;
}