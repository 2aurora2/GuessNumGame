#include<iostream>
#include<cctype>
#include<string>
#include"var.h"
using namespace std;
void SetGameDifficulty()
{
	cout << "����������Զ�����Ѷ�(2-10)��";
	string str1;
	while (1)
	{
		cin >> str1;
		mark3 = true;
		//����ĺϷ��Լ���
		for(int i=0;i<str1.size();++i)
			if (!isdigit(str1[i]))
			{
				mark3 = false;
				cout << "Ҫ����Ǹ����ޣ�" << endl
					<< "������������룺";
			}
		if(mark3)
		{
			//���ַ���ת��Ϊ��������
			level = atoi(str1.c_str());
			if (level < 2)
				cout << "�Ѷ�����Ϊ2�ޣ��Ѷ�̫�Ͷ����������������û��˼���԰ɣ�(��ͷ.jpg)" << endl
				<< "������������룺";
			else if (level > 10)
				cout << "Sorry!��Ϸ�Ѷ�Ŀǰ���ֻ��Ϊ10�ޣ���������͸Ľ��ģ�" << endl
				<< "������������룺";
			else
			{
				cout << "�����Ѷȵȼ�Ϊ" << level << "�ɹ���" << endl;
				break;
			}
		}
	}
}