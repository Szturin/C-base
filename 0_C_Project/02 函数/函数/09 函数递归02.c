#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void test(unsigned int num)
{
	if (num < 10000)//ջ���
	{
		test(num++);
	}
}
int main09()
{
	test(1);
	return 0;
}