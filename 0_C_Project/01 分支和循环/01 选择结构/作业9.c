#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main009()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);//24 18
	//����������ֱ�Ϊ24��18�����Լ��ֻ����18������
	int min = 0;//�ж�������˭��С
	if (m > n)
	{
		min = n;
	}
	else if (m < n)
	{
		min = m;
	}

	else
		min = m;
	int i = 0;

	//����һ
	//int maxgy = 0;//���Լ��
	//for (i = 1; i <= min; i++)
	//{
	//	if (m % i || n % i == 0)
	//	{
	//		maxgy = i;
	//	}
	//}

	////������
	//while (1)
	//{
	//	if (m % min == 0 && n % min == 0)
	//	{
	//		printf("���Լ���ǣ�%d\n", min);
	//	}
	//	min--;
	//}

	//շת�����
	int t = 0;
	while (t = m % n)
	{
		//t = m % n;
		m = n;
		n = t;
	}
	printf("���Լ���ǣ�%d\n", n);
	return 0;
}