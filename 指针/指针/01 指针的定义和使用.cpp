#include<iostream>
using namespace std;

int main1() 
{
	//1.定义指针
	int a = 10;
	//指针定义的语法：数据类型 * 指针变量名；
	int* p;
	//让指针记录变量a的地址
	p = &a;
	cout << &a << endl;//打印数据a的地址
	cout << p << endl;//打印指针变量p
	//2.使用指针
	//可以通过解引用（*）的方式来找到指针指向的内存
	//指针前加 * 代表解引用，找到指针指向的内存中的数据(可以进行修改和读取）
	cout << *p << endl;
	*p = 1000;
	cout << *p << endl;
	cout << a << endl;
	system("pause");
	return(0);
	
}