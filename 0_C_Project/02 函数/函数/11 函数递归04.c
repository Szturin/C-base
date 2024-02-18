#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

unsigned int my_fac(unsigned int n)
{
	if (n > 1)
	{
		return n * my_fac(n - 1);
	}
	else
	{
		return 1;
	}
}

int main11()
{
	unsigned int n = 4;
	printf("%d", my_fac(n));
	return 0;
}