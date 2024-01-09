#include<iostream>
using namespace std;

int main1()
{
	//while循环
	//在屏幕中打印 0~9 这10个数字 
	int num = 0;
	
	while (num < 10) // while(1) 无限循环
	//注意：在写循环时一定要写循环条件(在执行循环的时候，程序若不进入无限循环，必须提供退出的条件。
	{
		cout << num << endl;
		num++;
	}


	system("pause");
	return(0);
}