#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main3()
{
	//��whileѭ���У�break����������ֹѭ��
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
		{
			break;
		}
		printf("%d\n", i);
		i++;
	}
}