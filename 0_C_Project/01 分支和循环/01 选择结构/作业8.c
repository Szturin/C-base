#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//дһ�������ӡ1-100֮������3�ı���������
int main008()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		//�ж�i�Ƿ�Ϊ3�ı���
		if (i % 3 == 0)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}