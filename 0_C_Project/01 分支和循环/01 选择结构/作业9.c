#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main009()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);//24 18
	//如果两个数分别为24和18，最大公约数只能在18及以下
	int min = 0;//判断两个数谁更小
	if (m > n)
	{
		min = n;
	}
	else if (m < n)
	{
		min = m;
	}

	else
		min = m;
	int i = 0;

	//方法一
	//int maxgy = 0;//最大公约数
	//for (i = 1; i <= min; i++)
	//{
	//	if (m % i || n % i == 0)
	//	{
	//		maxgy = i;
	//	}
	//}

	////方法二
	//while (1)
	//{
	//	if (m % min == 0 && n % min == 0)
	//	{
	//		printf("最大公约数是：%d\n", min);
	//	}
	//	min--;
	//}

	//辗转相除法
	int t = 0;
	while (t = m % n)
	{
		//t = m % n;
		m = n;
		n = t;
	}
	printf("最大公约数是：%d\n", n);
	return 0;
}