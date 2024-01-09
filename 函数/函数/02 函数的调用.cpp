#include<iostream>
using namespace std;


//定义加法函数
//函数定义的时候，num1和num2并没有实际的数据，只是一个形式上的参数，简称形参。
int add1(int num1, int num2)
{
	int sum = num1 + num2;
	return(sum);
}
int main2()
{
	//main函数中调用add函数
	int a = 10;
	int b = 20;

	//函数调用语法：函数名称(参数)
	//a和b称为实际的参数 “实参”
	//当调用函数时候，实参的值会传递给形参
	int c = add1(a, b);//将函数运算结果调用，并且赋值到 整型 c
	cout <<"c = " << c << endl;

	a = 100;
	b = 200;

	c = add1(a, b);
	cout << "c = " << c << endl;

	system("pause");
	return(0);
}