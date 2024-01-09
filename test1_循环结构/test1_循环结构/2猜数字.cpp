#include<iostream>
using namespace std;

int main2()
{
	srand(time(0));
	int num = rand() % 100 + 1;
	int val = 0;
	while (val != num)
	{
		cout << "请输入猜测的数：" << endl;
		cin >> val;
		if (val > num)
		{
			cout << "过大" << endl;
		}
		else if (val < num)
		{
			cout << "过小" << endl;
		}
		else
		{
			cout << "正确" << endl;
			cout << "随机生成数是：" << num << endl;
		}
	}
	system("pause");
	return(0);
}