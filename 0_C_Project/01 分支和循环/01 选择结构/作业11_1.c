#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

// дһ������, ��ӡ100~200֮�������
//����-����
//ֻ�ܱ�1������������

//�����Ż�
//ִ�д�������

int main0011_1()
{
	int i, j = 0;
	for (i = 100; i <= 200; i++)
	{

		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j == i)//���i������,j��һֱ�Լ�һֱ������i
		{
			printf("%dΪ����\n", i);
		}
	}
	return 0;
}