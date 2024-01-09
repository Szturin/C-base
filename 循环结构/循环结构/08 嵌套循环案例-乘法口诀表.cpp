#include<iostream>
using namespace std;

int main8()
{
	//乘法口诀表
	//打印行数
	// 
	// 外层循环控制行数
	for (int i = 1; i <= 9; i++)
	{
		//cout << i << endl;

		// 内层循环控制列数，每行的列数等于当前行数
		for (int j = 1; j <= i; j++)
		{
			// 输出乘法表达式
			cout << j << " x " << i << " = " << j * i << "  ";
		}
		// 换行，开始打印下一行
		cout << endl;
	}



	system("pause");
	return(0);
}