#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//дһ���ݹ麯��Digitsum(n);���һ���Ǹ����������������������֮��
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