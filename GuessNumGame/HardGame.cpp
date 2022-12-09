#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
#include"var.h"
using namespace std;
//存储玩家输入的数字
int InputNum2[10];
//随机生成的答案
int AnswerNum2[10];
int temp1;
int MAXTRY[11] = { 0,0,8,9,9,20,30,35,40,45,50 };
void HardGame()
{
	system("cls");
	bool HardJudge = false;
	cout << "    当前游戏难度等级：" << level << "(代表玩家需要猜测的数字个数)" << endl;
	cout << "--------------------------------------------------------" << endl;
	cout << "      玩家选择的是困难模式，本关卡限定猜测次数：" << MAXTRY[level] << endl;
	cout << "--------------------------------------------------------" << endl;
	while (1)
	{
		int nowtry = MAXTRY[level];
		//设置随机数种子
		srand((unsigned int)time(NULL));
		//产生当前level对应位数的数字
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
			//对玩家输入的数字进行限制只能输入单个数字并且用空格隔开
			bool judgeinput1 = true;
			while (judgeinput1)
			{
				cout << "请玩家输入猜测的数字以及位置(输入数字的个数要和当前难度等级一致！！)：" << endl;
				for (int i = 0; i < level; ++i)
				{
					cin >> InputNum2[i];
					if (InputNum2[i] >= 10)
						judgeinput1 = false;
				}
				if (!judgeinput1)
				{
					cout << "输入的每个数字都应该是0-9并用空格隔开噢！" << endl;
					judgeinput1 = true;
				}
				else
					judgeinput1 = false;
			}
			//对玩家猜测进行判断
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
					cout << "恭喜玩家通过困难难度的最后关卡！你已经无可匹敌了！" << endl;
					level = 2;
				}
				else
				{
					HardJudge = true;
					cout << "恭喜玩家通关本关卡！" << endl;
					++level;
				}
			}
			else
			{
				--nowtry;
				if (nowtry > 0)
				{
					cout << "猜中的数字正确且位置正确的个数为：" << HardRightBoth << endl;
					cout << "猜中的数字正确但位置错误的个数为：" << HardRightNum << endl;
					cout << "玩家本关卡剩余猜测次数为：" << nowtry << endl;
				}
				else
					HardJudge = true;
			}
		}
		if (HardJudge)
		{
			if (nowtry == 0)
				cout << "很遗憾，玩家猜测次数已消耗完，再接再厉哦！" << endl;
			break;
		}
	}
}