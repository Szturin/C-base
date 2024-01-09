#include<iostream>
using namespace std;

int main3()
{
	//1.前置递增
	int a = 10;
	++a; //让变量进行前置递增运算
	cout << "a=" << a << endl;
	
	//2.后置递增
	int b = 10;
	b++; //让变量进行后置递增运算
	cout << "b=" << b << endl;

	//3.前置和后置的区别
	//前置递增 先让变量+1，然后进行表达式计算    注意：a1输出为变化后， b1输出包含 a1(变化后)
	int a1 = 10;
	int b1 = ++a1 * 10;
	cout << a1 << endl;
	cout << b1 << endl;
	
	//后置递增 先进行表达式计算，再让变量+1      注意：a2输出为变化后， b2输出包含 a1(变化前)
	int a2 = 10;
	int b2 = a2++ * 10;
	cout << a2 << endl;
	cout << b2 << endl;
	

	system("pause");
	return(0);
}
//递减--