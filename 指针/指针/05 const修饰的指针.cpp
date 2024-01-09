#include<iostream>
using namespace std;

int main5()
{


	//1.const嵌套修饰在指针修饰过的变量，即指针常量,如果把例如const p当成一个常量，可以理解为指针修饰的常量
	int a = 10;
	int b = 20;
	int* const p = &a;//地址（指向）不能被更改
	//p = &b;错误
	*p=20;//正确


	//2.const修饰指针，即常量指针，可以理解为指向常量的指针
	const int* p1 = &a;//指针的值不能被更改
	//*p1=20;错误
	p1 = &b;


	//3.const修饰指针和变量，指向常量的指针常量
	const int* const p2 = &a;//地址（指向）和值均不能修改
	//p2 = &a;
	///*p2 = 20;
	system("pause");
	return(0);
}