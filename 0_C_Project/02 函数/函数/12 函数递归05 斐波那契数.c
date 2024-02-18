#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int count = 0;

int Fib(int n)
{
	//统计第三个斐波那契数
	if (n == 3)
	{
		count++;
	}
	if (n > 2)
	{
		return Fib(n - 1) + Fib(n - 2);//效率太低，重复太量的运算
	}
	else
	{
		return 1;
	}
}

int Fib_1(int n)
{
	int a = 1;
	int b = 1;
	int c = 0;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main12()
{
	int num1 = 40;
	int num2 = 50;
	//printf("%d\n", Fib(num1));
	//printf("%d\n", count);
	//printf("%d\n", Fib(num2));//执行时间过长 
	printf("%d", Fib_1(num2));
	return 0;
}

