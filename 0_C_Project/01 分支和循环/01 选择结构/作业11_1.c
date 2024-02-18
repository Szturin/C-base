#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

// 写一个代码, 打印100~200之间的素数
//素数-质数
//只能被1和他本身整除

//代码优化
//执行次数更少

int main0011_1()
{
	int i, j = 0;
	for (i = 100; i <= 200; i++)
	{

		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j == i)//如果i是素数,j会一直自加一直到等于i
		{
			printf("%d为素数\n", i);
		}
	}
	return 0;
}