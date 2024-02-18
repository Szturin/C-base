#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main02()
{
	int i = 0;
	int num = 1;//1到10的阶乘
	int sum = 0;//1到10的阶乘总和

	for (i = 1; i <= 10; i++)
	{
		num *= i;
		sum += num;
		printf("第%d次和为:%d\n", i, sum);
	}
	//时间复杂度低，更高效的写法

	printf("总的和为:%d\n", sum);
	return 0;
}