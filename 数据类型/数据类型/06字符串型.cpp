#include<iostream>
using namespace std;
#include<string> //vs2022中可以省略

int main6()
{
	//1.C风格的字符串
	//注意事项1. char 字符串名[]
	//注意事项2. 等号后面要加双引号,包含起来字符串
	char str[] = "hello world";
	cout << str << endl;

	//2.C++风格的字符串
	string str2 = "hello world"; //string 变量名 = "字符串值"
	cout << str2 << endl;

	system("pause");
	return(0);
}