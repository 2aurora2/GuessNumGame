#include<iostream>
using namespace std;
void ShowGameRule()
{
	cout << "****************************************************************************************" << endl;
	cout << "                                        游戏规则                                       " << endl;
	cout << "****************************************************************************************" << endl;
	cout << "   1.系统会随机产生一组按一定顺序排列的数字0-9，玩家需要猜出正确的数字及其所在的位置" << endl;
	cout << "   2.系统会根据玩家每次猜测显示玩家的猜测正确与否的提示，包括：" << endl;
	cout << "     1）猜对数字且位置正确的个数" << endl;
	cout << "     2）猜对数字但位置不正确的个数" << endl;
	cout << "   3.游戏可自定义难度，即自定义要猜测的数字的个数，若无自定义，默认从2个数字猜起" << endl;
	cout << "   4.游戏的闯关模式分为简单难度以及困难难度：" << endl;
	cout << "     1）简单难度：猜测的次数没有限制，只要猜测正确即可进入下一关" << endl;
	cout << "     2）困难难度：系统会记录玩家猜测的次数，猜测次数在一定范围内才能进入下一关" << endl;
	cout << "   5.游戏规则就是这么简单，管你听没听懂，玩就完了(狗头.jpg)" << endl;
	cout << "****************************************************************************************" << endl;
}