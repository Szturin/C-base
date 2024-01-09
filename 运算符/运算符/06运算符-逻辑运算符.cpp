#include<iostream>
using namespace std;

int main()
{
	//1.逻辑运算符  非  !
	int a = 10;
	//在C++中， 除了0都为真
	cout << !a << endl;//如果a为假，那么!a为真

	cout << !!a << endl;//两次取 非


	//2.逻辑运算符 与 &&            逻辑与：同真为真，其余为假
	int a1 = 10;
	int b1 = 10;


	cout << (a1 && b1) << endl;

	//int a1 = 10;
	//int b1 = 0;    错误：不能同时定义相同变量两次,定义了两个具有相同名称的变量a

	a1 = 10;
	b1 = 0;

	cout << (a1 && b1) << endl;


	//3.逻辑运算符 或 ||            逻辑或：同假为假，其余为真
	int a2 = 10;        
	int b2 = 10;

	cout << (a2 || b2) << endl;

	a2 = 10;
	b2 = 0;

	cout << (a2 || b2) << endl;

	a2 = 0;
	b2 = 0;

	cout << (a2 || b2) << endl;

	system("pause");
	return(0);
}//异或 ^