#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//接收一个整型值，按顺序打印它的每一位
void print(unsigned int num)
{
	if (num > 9)
	{
		print(num / 10);//起到传递参数的作用
	}
	printf("%d ", num % 10);
}
//函数递归
int main08()
{
	unsigned int num = 0;
	printf("请输入数字：");
	scanf("%d", &num);
	print(num);
	return 0;
}