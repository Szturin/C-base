#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main2()
{
	int arr[10] = {0};//��ʼ������
	int i = 0;
	int sum = 0;
	//����
	for (i = 0; i < 10; i++)
	{
		printf("�������%d�����֣�\n", i + 1);
		scanf("%d", &arr[i]);
		sum = sum + arr[i];
	}
	
	
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("���鳤��Ϊ%d\n", len);

	////���
	//int sum = 0;
	//for (i = 0; i < len; i++)
	//{
	//	sum = sum + arr[i];
	//}

	//��ƽ��ֵ
	double avg = sum / len;
	printf("��Ϊ%d\n", sum);
	printf("ƽ��ֵΪ%lf", avg);

	system("pause");
	return 0;
}