#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int is_leap_year(int i)
{
	if ((i % 100 != 0 && i % 4 == 0 )|| i % 400 == 0)
	{
		return 1;
	}
	return 0;
}

int is_leap_year1(int i)
{
	return((i % 100 != 0 && i % 4 == 0) || i % 400 == 0);
}

//一个函数，如果不写返回类型，默认返回INT类型，但是不规范
int main04()
{
	int i = 0;
	for (i = 1000; i <= 2000;i++)
	{
		if (is_leap_year(i) == 1)
		{
			printf("%d是闰年\n", i);
		}
	}
	
	return 0;
}