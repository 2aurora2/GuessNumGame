#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
#include"var.h"
using namespace std;
//�洢������������
int InputNum2[10];
//������ɵĴ�
int AnswerNum2[10];
int temp1;
int MAXTRY[11] = { 0,0,8,9,9,20,30,35,40,45,50 };
void HardGame()
{
	system("cls");
	bool HardJudge = false;
	cout << "    ��ǰ��Ϸ�Ѷȵȼ���" << level << "(���������Ҫ�²�����ָ���)" << endl;
	cout << "--------------------------------------------------------" << endl;
	cout << "      ���ѡ���������ģʽ�����ؿ��޶��²������" << MAXTRY[level] << endl;
	cout << "--------------------------------------------------------" << endl;
	while (1)
	{
		int nowtry = MAXTRY[level];
		//�������������
		srand((unsigned int)time(NULL));
		//������ǰlevel��Ӧλ��������
		for (int i = 0; i < level; ++i)
		{
			bool tempJudge1 = true;
			temp1 = rand() % 10;
			for (int j = 0; j < i; ++j)
				if (temp1 == AnswerNum2[j])
				{
					tempJudge1 = false;
					--i;
					break;
				}
			if (tempJudge1)
				AnswerNum2[i] = temp1;
		}
		while (!HardJudge)
		{
			HardRightBoth = HardRightNum = 0;
			//�������������ֽ�������ֻ�����뵥�����ֲ����ÿո����
			bool judgeinput1 = true;
			while (judgeinput1)
			{
				cout << "���������²�������Լ�λ��(�������ֵĸ���Ҫ�͵�ǰ�Ѷȵȼ�һ�£���)��" << endl;
				for (int i = 0; i < level; ++i)
				{
					cin >> InputNum2[i];
					if (InputNum2[i] >= 10)
						judgeinput1 = false;
				}
				if (!judgeinput1)
				{
					cout << "�����ÿ�����ֶ�Ӧ����0-9���ÿո�����ޣ�" << endl;
					judgeinput1 = true;
				}
				else
					judgeinput1 = false;
			}
			//����Ҳ²�����ж�
			for (int i = 0; i < level; ++i)
				for (int j = 0; j < level; ++j)
					if (AnswerNum2[j] == InputNum2[i])
					{
						++HardRightNum;
						break;
					}
			for (int i = 0; i < level; ++i)
				if (AnswerNum2[i] == InputNum2[i])
					++HardRightBoth;
			HardRightNum = HardRightNum - HardRightBoth;
			if (HardRightBoth == level && nowtry > 0)
			{
				if (level == 10)
				{
					HardJudge = true;
					cout << "��ϲ���ͨ�������Ѷȵ����ؿ������Ѿ��޿�ƥ���ˣ�" << endl;
					level = 2;
				}
				else
				{
					HardJudge = true;
					cout << "��ϲ���ͨ�ر��ؿ���" << endl;
					++level;
				}
			}
			else
			{
				--nowtry;
				if (nowtry > 0)
				{
					cout << "���е�������ȷ��λ����ȷ�ĸ���Ϊ��" << HardRightBoth << endl;
					cout << "���е�������ȷ��λ�ô���ĸ���Ϊ��" << HardRightNum << endl;
					cout << "��ұ��ؿ�ʣ��²����Ϊ��" << nowtry << endl;
				}
				else
					HardJudge = true;
			}
		}
		if (HardJudge)
		{
			if (nowtry == 0)
				cout << "���ź�����Ҳ²�����������꣬�ٽ�����Ŷ��" << endl;
			break;
		}
	}
}