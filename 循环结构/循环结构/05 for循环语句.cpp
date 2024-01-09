#include<iostream>
using namespace std;

/*
作用：满足循环条件，执行循环语句
语法：for(起始表达式；条件表达式；末尾循环体）{ 循环语句；}
*/
int main5()
{
	//for循环
	//从数字0 打印到 数字9

	for (int i = 0; i < 10; i++) //for语句内各种表达式也可以为空
	{
		cout << i << endl;//循环体(优先执行）
	}
	// int i = 0 <0>   i < 10<1>    i++<3>     cout << i << endl<2>
	//执行顺序0123123123



	system("pause");
	return(0);
}
//总结: while,do...while,for都是开发中常用的循环语句，for循环结构比较清晰，比较常用