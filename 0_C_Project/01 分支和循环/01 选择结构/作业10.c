#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//判断 1000~2000年 之间哪些年份是闰年

int main0010()
{
	int y, count = 0;
	for (y = 1000; y <= 2000; y++)
	{
		if ((y % 100 != 0 && y % 4 == 0) || (y % 400 == 0)) //y % 100 == n  n不是非零即1 n是任意整数
			//y % 100 == 0 & y % 400 == 0
			//y % 400 = 0 更简洁
		{
			printf("闰年为：%d年\n", y);
			count++;
		}
	}
	printf("闰年个数为：%d", count);
	return 0;
}