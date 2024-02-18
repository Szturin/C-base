#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main41()// for循环 中最好不要在 循环体 内部 进行 变量再定义
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
		i = 5;
	}
	return 0;
}