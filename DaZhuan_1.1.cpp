#include<iostream>
using namespace std;

int main()
{
	double score;
	cout << "请输入您的高考分数：" << endl;
	cin >> score;
	cout << "您的分数为：" << score << endl;

	if (score > 750 ||score < 0)
	{
		cout << "阿巴阿巴，再检查一下。。。你TM输的对不对" << endl;
	}
	else
	{
		if (score > 699)
			printf("恭喜您是人上人");
		else if (score > 625)
			printf("恭喜您考上了玖扒伍");
		else if (score > 600)
			printf("恭喜您考入了二幺幺");
		else if (score > 500)
			printf("恭喜您考入了倴樖");
		else if (score > 400)
			printf("恭喜您考入了带砖");
		else if (score > 0)
			printf("乐");
		else if (score == 0)
			printf("好棒哦，考入了南理工");
	}

	return 0;
}
