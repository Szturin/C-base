#include<iostream>
using namespace std;

int main3()
{
	//do...while语句
	//在屏幕中输出 0 刀 9 这十个数字

	int num = 0;

	do
	{
		cout << num << endl;
		num++;//循环体
	}
	while (num < 10);//条件判断

	//do...while和while循环的区别在于 do...while会先执行一次循环语句(循环体),保证了循环至少进行一次


	system("pause");
	return(0);
}