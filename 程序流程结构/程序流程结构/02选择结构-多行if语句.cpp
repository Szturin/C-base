#include<iostream>
using namespace std;
#include <windows.h>

int main2()
{
	//选择结构，多行if语句
	//输入分数，如果分数大于100，视为"Opening the World",在屏幕上输出
	//如果没达到100分以上，打印"Nothing Happened"

	//1.输入分数
	int score = 0;
	cout << "请输入分数：" << endl;
	cin >> score;
	

	//2.提示用户输入的分数
	cout << "您输入的分数为:" << score << endl;

	//3.判断

	
	cout << "请稍等" << endl;//附加效果
	Sleep(3000);//延时函数


	if (score > 100)
	{
		cout << "Opening the World!" << endl;
	}
	else
	{
		cout << "Nothing Happened..." << endl;
	}


	system("pause");
	return(0);
}