#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//写一个递归函数Digitsum(n);组成一个非负整数，返回组成他的数字之和
int Digitsum(int n)
{
	int temp=0;
	if (n < 10)
	{
		return n;
	}
	else
	{
		return Digitsum(n / 10) + n % 10;
	}
}

int main21()
{
	int num = 2024;
	int sum = Digitsum(num);
	printf("%d", sum);
	return 0;
}