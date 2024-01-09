#include<iostream>
using namespace std;

int main2()
{
	//1.系统生成随机数
	srand(time(0));// 设置随机数种子，利用当前系统时间生成随机数，防止每次随机数都一样
	int num = rand() % 100 + 1; //生成 0 + 1~99 + 1 随机数 (即 1 ~ 100)
	//cout << num << endl; //如果没有srand(time(0)); 会固定为同一个随机数种子		输出：伪随机，一直为42

	//2.玩家进行猜测
	int val = 0;
	
	while (num != val)
	{
		cin >> val; //玩家输入数据

		//3.判断玩家的猜测
		//猜错	提示猜的结果		过大或者过小		 重新返回第二步
		if (val > num)
		{
			cout << "猜测过大" << endl;
		}
		else if (val < num)
		{ 
			cout << "猜测过小" << endl;
		}
		else
		{
			cout << "恭喜您猜对了！" << endl;
		}



	}
	/*
	while(1)
	{
		选择结构
		break;//推出当前循环结构，可以用该关键词推出循环
	}
	也可以结束循环
	*/
	




	system("pause");
	return(0);
}