#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main02()
{
	int i = 0;
	int num = 1;//1��10�Ľ׳�
	int sum = 0;//1��10�Ľ׳��ܺ�

	for (i = 1; i <= 10; i++)
	{
		num *= i;
		sum += num;
		printf("��%d�κ�Ϊ:%d\n", i, sum);
	}
	//ʱ�临�Ӷȵͣ�����Ч��д��

	printf("�ܵĺ�Ϊ:%d\n", sum);
	return 0;
}