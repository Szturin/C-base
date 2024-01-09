#include<iostream>
using namespace std;
//赋值运算符的作用：用于将表达式的值赋予给变量
int main4()
{
	//赋值运算符
	// =
	int a = 10;
	a = 100;
	cout << "a=" << a << endl;

	// +=
	a = 10;
	a += 10;
	cout << "a=" << a << endl;

	// -=
	a = 10;
	a -= 10;
	cout << "a=" << a << endl;

	// *=
	a = 10;
	a *= 2;
	cout << "a=" << a << endl;

	// /=
	a = 10;
	a /= 5;
	cout << "a=" << a << endl;

	// %=
	a = 10;
	a %= 3;
	cout << "a=" << a << endl;

	system("pause");
	return(0);
}