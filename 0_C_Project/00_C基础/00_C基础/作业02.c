#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int sum(int a)
{
	int c = 0;
	static int b = 3;//static���εľֲ������������ⲿ�������ӣ�û��ֵ�����ٹ���
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
//��ӡ 8 10 12 14 16