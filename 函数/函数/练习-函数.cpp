#include<iostream>
using namespace std;
#include "swap.h"
#include "sum0toN.h"

int main()
{
	int select = 0;
	while (select == 0)
	{
		int a;
		int b;
		int n;
		cout<<"交换两个变量 num1 num2 的值：" << endl;
		cout << "请输入num1：" << endl;
		cin >> a;
		cout << "num1的初始值为：" << a << endl;
		cout << "请输入num2：" << endl;
		cin >> b;
		cout << "num2的初始值为：" << b << endl;
		swap(a, b);
		cout << "计算1到n的累加，请输入n：" << endl;
		cin >> n;
		cout << "累加和为：" << sum0toN(n) << endl;

		cout << "请问还要重新执行程序吗？如果是请输入0：" << endl;
		cin >> select;
		if (select == 0)
		{
			cout << "继续执行程序！" << endl;
		}
		else
		{
			cout << "结束程序..." << endl;
		}
	}
	system("pause");
	return(0);
}