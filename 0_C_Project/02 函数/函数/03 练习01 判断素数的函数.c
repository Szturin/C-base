#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

int is_prime(int n)
{
	int j = 0;
	for (j = 2; j < sqrt(n); j++)//判断是否能被除了1和本身的数整除
	{
		if (n % j == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main03()
{
	int i = 0;
	for (i = 100; i < 200; i++)
	{
		if (is_prime(i) == 1)
		{
			printf("%d 是素数\n", i);
		}
	}

	return 0;
}