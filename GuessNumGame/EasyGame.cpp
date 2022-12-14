#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
#include"var.h"
using namespace std;
//存储玩家输入的数字
int InputNum1[10];
//随机生成的答案
int AnswerNum1[10];
int temp;
void EasyGame()
{
	system("cls");
	bool EasyJudge = false;
	cout << "    当前游戏难度等级：" << level << "(代表玩家需要猜测的数字个数)" << endl;
	cout << "--------------------------------------------------------" << endl;
	while (1)
	{
		//设置随机数种子
		srand((unsigned int)time(NULL));
		//产生当前level对应位数的数字
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
			//对玩家输入的数字进行限制只能输入单个数字并且用空格隔开
			bool judgeinput = true;
			while (judgeinput)
			{
				cout << "请玩家输入猜测的数字以及位置(输入数字的个数要和当前难度等级一致！！)：" << endl;
				for (int i = 0; i < level; ++i)
				{
					cin >> InputNum1[i];
					if (InputNum1[i] >= 10)
						judgeinput = false;
				}
				if (!judgeinput)
				{
					cout << "输入的每个数字都应该是0-9并用空格隔开噢！" << endl;
					judgeinput = true;
				}
				else
					judgeinput = false;
			}
			//对玩家猜测进行判断
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
					cout << "恭喜玩家通过简单难度的最后关卡！你已经无可匹敌了！" << endl;
					level = 2;
				}
				else
				{
					EasyJudge = true;
					cout << "恭喜玩家通关本关卡！" << endl;
					++level;
				}
			}
			else
			{
				cout << "猜中的数字正确且位置正确的个数为：" << EasyRightBoth << endl;
				cout << "猜中的数字正确但位置错误的个数为：" << EasyRightNum << endl;
			}
		}
		if (EasyJudge)
			break;
	}
}