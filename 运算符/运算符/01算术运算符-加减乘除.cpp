#include<iostream>
using namespace std;

int main1()
{
	//加减乘除
	int a1 = 10;
	int b1 = 3;


	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl; //两个整数相除，结果依然是整数，会自动将小数部分去除 (整数型）

	int a2 = 5;
	int b2 = 10;
	cout << a2 / b2 << endl;

	//两个小数相除，结果可显示小数
	double d1 = 0.25;
	double d2 = 0.3;
	cout << d1 / d2 << endl; //运算的结果可以显示小数 （浮点型)

	system("pause");
	return(0);
}