#include<iostream>

using namespace std;

int main8()
{
	const int month = 12; //const修饰的变量,通常在变量定义前加const,修饰该变量为常量，不可更改 , const 数据类型 常量名 = 常量值。

	cout << "一年有" << month << "月" << endl;

	system("pause");

	return(0);

}
//同一个项可以同时 定义 不同的 const修饰的常量和 define宏常量 。