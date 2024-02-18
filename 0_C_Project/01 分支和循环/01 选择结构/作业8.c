#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//写一个代码打印1-100之间所有3的倍数的数字
int main008()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		//判断i是否为3的倍数
		if (i % 3 == 0)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}