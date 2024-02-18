#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main1()
{
	int a = 0;
	printf("请输入：\n");
	scanf("%d", &a);//不要加转义字符
	if (a % 2 == 1)
	{
		printf("为奇数\n");
	}
	else
	{
		printf("为偶数\n");
	}

	int num = 0;
	for (num = 1; num <= 100; num++)
	{
		if (num % 2 == 1)
		{
			printf("奇数：%d\n", num);
		}
	}
	return 0;
}
