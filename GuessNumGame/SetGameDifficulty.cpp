#include<iostream>
#include<cctype>
#include<string>
#include"var.h"
using namespace std;
void SetGameDifficulty()
{
	cout << "当前难度为：" << level << endl;
	cout << "玩家请输入自定义的难度(2-10)：";
	string str1;
	while (1)
	{
		cin >> str1;
		mark3 = true;
		//输入的合法性检验
		for(int i=0;i<str1.size();++i)
			if (!isdigit(str1[i]))
			{
				mark3 = false;
				cout << "要输入非负数噢！" << endl
					<< "请玩家重新输入：";
			}
		if(mark3)
		{
			//将字符串转换为整数类型
			level = atoi(str1.c_str());
			if (level < 2)
				cout << "难度至少为2噢！难度太低对玩家这样聪明的人没意思，对吧？(狗头.jpg)" << endl
				<< "请玩家重新输入：";
			else if (level == 10)
				cout << "难度为10的关卡只能通过闯关到达哦，加油吧少年！" << endl
				<< "请玩家重新输入：";
			else if (level > 10)
				cout << "由于猜测的数字由不重复的0-9组成，所以最多只能猜测10个数字哦" << endl
				<< "请玩家重新输入：";
			else
			{
				cout << "设置难度等级为" << level << "成功！" << endl;
				break;
			}
		}
	}
}