#include<iostream>
using namespace std;

int main2()
{
	int a1 = 10;
	int a2 = 3;
	cout << a1 % a2 << endl;

	int b1 = 10;
	int b2 = 20;
	cout << b1 % b2 << endl;

	double c1 = 0.231;
	double c2 = 3.14;
	//cout << c1 % c2 << endl; //错误，取模运算时，变量的值不能为小数(浮点数)

	system("pause");
	return(0);
}
//取模本质就是取余