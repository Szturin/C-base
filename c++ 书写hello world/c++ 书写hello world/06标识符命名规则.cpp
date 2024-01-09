#include<iostream>
using namespace std;

int main()
{
	// 1.标识符不可以是关键字(标识符：变量，常量的名称）yn
	int abc123 = 10;//2.标识符由字母，数字，下划线组成
	int _123abc = 100;//3.标识符第一个字符只能是字母或下划线
	
	int aaa = 1000;//4.标识符区分大小写
	// cout << AAA << endl; 错误，AAA不是aaa。

	//给变量起名的时候，最好做到“见名知意”。
	int num1 = 1;
	int num2 = 2;
	int sum = num1 + num2;
	cout << "1和2相加为" << sum << endl;
	system("pause");
	return(0);
}