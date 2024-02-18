#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main31()
{
	//在while循环中，continue的作用是跳过本次循环,直接去判断部分，看是否进行下一次循环体
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
		{
			continue;
		}
		printf("%d\n", i);
		i++;
	}
}//执行结果：无限循环