#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�������е����ֵ
int main1()
{
	//��������
	int arr[10] = {0};
	//��������Ԫ��
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("�������%d�����֣�", i+1);
		scanf("%d", &arr[i]);
	}

	int len = sizeof(arr) / sizeof(arr[0]);//����ĳ���

	int max = arr[0];//����
	for ( i = 1; i < len; i++)

	{
		if (arr[i] > max)
		{
			max = arr[i];//����max
		}
	}
	//������ֵ
	printf("�����е����ֵΪ%d\n", max);
	return 0;
	

}