#include<iostream>
using namespace std;

//函数的定义要在main函数之外

//值传递
void swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "swap01 a=" << a << endl;
	cout << "swap01 b=" << b << endl;
}

//地址传递
void swap02(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main7()
{
	int a = 10;
	int b = 20;
	swap01(a, b);//值传递不能改变实参
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	swap02(&a, &b);//地址传递可以改变实参
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	system("pause");
	return(0);
}