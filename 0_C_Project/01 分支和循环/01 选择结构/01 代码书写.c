#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main1()
{
	int a = 0;
	printf("�����룺\n");
	scanf("%d", &a);//��Ҫ��ת���ַ�
	if (a % 2 == 1)
	{
		printf("Ϊ����\n");
	}
	else
	{
		printf("Ϊż��\n");
	}

	int num = 0;
	for (num = 1; num <= 100; num++)
	{
		if (num % 2 == 1)
		{
			printf("������%d\n", num);
		}
	}
	return 0;
}
