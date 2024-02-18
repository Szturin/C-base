#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main3()
{
	//在while循环中，break用于永久中止循环
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
		{
			break;
		}
		printf("%d\n", i);
		i++;
	}
}