#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
#include"var.h"
using namespace std;
//�洢������������
int InputNum1[10];
//������ɵĴ�
int AnswerNum1[10];
int temp;
void EasyGame()
{
	system("cls");
	bool EasyJudge = false;
	cout << "    ��ǰ��Ϸ�Ѷȵȼ���" << level << "(���������Ҫ�²�����ָ���)" << endl;
	cout << "--------------------------------------------------------" << endl;
	while (1)
	{
		//�������������
		srand((unsigned int)time(NULL));
		//������ǰlevel��Ӧλ��������
		for (int i = 0; i < level; ++i)
		{
			bool tempJudge = true;
			temp = rand() % 10;
			for (int j = 0; j < i; ++j)
				if (temp == AnswerNum1[j])
				{
					tempJudge = false;
					--i;
					break;
				}
			if (tempJudge)
				AnswerNum1[i] = temp;
		}
		while (!EasyJudge)
		{
			EasyRightBoth = EasyRightNum = 0;
			cout << "���������²�������Լ�λ��(ע��ÿ�������ǲ�һ������)��";
			for (int i = 0; i < level; ++i)
				cin >> InputNum1[i];
			//����Ҳ²�����ж�
			for (int i = 0; i < level; ++i)
				for (int j = 0; j < level; ++j)
					if (AnswerNum1[j] == InputNum1[i])
					{
						++EasyRightNum;
						break;
					}
			for (int i = 0; i < level; ++i)
				if (AnswerNum1[i] == InputNum1[i])
					++EasyRightBoth;
			EasyRightNum = EasyRightNum - EasyRightBoth;
			if (EasyRightBoth == level)
			{
				if (level == 10)
				{
					EasyJudge = true;
					cout << "��ϲ���ͨ�����Ѷȵ����ؿ������Ѿ��޿�ƥ���ˣ�" << endl;
					level = 2;
				}
				else
				{
					EasyJudge = true;
					cout << "��ϲ���ͨ�ر��ؿ���" << endl;
					++level;
				}
			}
			else
			{
				cout << "���е�������ȷ��λ����ȷ�ĸ���Ϊ��" << EasyRightBoth << endl;
				cout << "���е�������ȷ��λ�ô���ĸ���Ϊ��" << EasyRightNum << endl;
			}
		}
		if (EasyJudge)
			break;
	}
}