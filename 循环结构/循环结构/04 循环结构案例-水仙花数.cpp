#include<iostream>
using namespace std;

int main4()
{
	//1.将所有的三位数进行输出 （100~999）

	int num = 100;

	do
	{
		//2.在所有三位数中找到水仙花数

		int a = 0;//个位
		int b = 0;//十位
		int c = 0;//百位

		a = num % 10;//获取数字的个位
		b = num / 10 % 10;//获取数字的十位
		c = num / 100 % 10;//获取数字的百位

		if (a*a*a + b*b*b + c*c*c == num)//判断是否为仙花数
		{
			cout << num << endl; //输出水仙花数
		}
		num++; //循环体
	}
	while(num < 1000);//循环条件


	system("pause");
	return(0);
}