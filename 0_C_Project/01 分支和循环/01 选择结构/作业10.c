#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�ж� 1000~2000�� ֮����Щ���������

int main0010()
{
	int y, count = 0;
	for (y = 1000; y <= 2000; y++)
	{
		if ((y % 100 != 0 && y % 4 == 0) || (y % 400 == 0)) //y % 100 == n  n���Ƿ��㼴1 n����������
			//y % 100 == 0 & y % 400 == 0
			//y % 400 = 0 �����
		{
			printf("����Ϊ��%d��\n", y);
			count++;
		}
	}
	printf("�������Ϊ��%d", count);
	return 0;
}