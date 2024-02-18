#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int sum(int a)
{
	int c = 0;
	static int b = 3;//static修饰的局部变量不会与外部建立链接，没有值的销毁过程
	c += 1;
	b += 2;
	return(a + b + c);
}
int main02()
{
	int i;
	int a = 2;
	for (i = 0; i < 5; i++)
	{
		printf("%d", sum(a));
	}
	return 0;
}
//打印 8 10 12 14 16