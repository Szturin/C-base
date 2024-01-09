#include<iostream>
using namespace std;
#define RESET   "\033[0m"
#define PINK    "\033[95m"

int main()
{

	//利用嵌套循环实现星图

	//打印一行星图
	//外层执行1次，内层执行1轮
	//外层循环
	for (int i = 0; i < 10; i++)    // 内部for循环的变量i与外部for循环的变量i是在不同的作用域中。
	{
		//内存循环
		for (int j = 0; j < 10; j++) //i改为j，避免歧义
		{
			cout << PINK << "* " << RESET;
		}
		cout << endl;//跳出循环后重新直行初始化语句 ， int i = 0；
	}


	system("pause");
	return(0);
}