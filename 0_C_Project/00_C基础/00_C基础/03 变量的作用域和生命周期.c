#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//
//���������������
// 
// ������
//�ֲ������������򣺾��Ǳ������ڵľֲ���Χ
//ȫ�ֱ�������������������
//
//
//int g_val = 2021;//ȫ�ֱ���
//
//int main()
//{
//	printf("1:%d\n", g_val);
//	printf("hehe\n");
//	{
//		printf("2:%d\n", g_val);
//
//		int a = 10;
//		printf("a = %d\n", a);
//	}
//	printf("3:%d\n", g_val);
//
//	return 0;
//}
//



//extern g_val;
//
//int main()
//{
//	printf("%d", g_val);
//	return 0;
//}

//��������
//�������������ڣ������Ĵ����ʹݻ�֮���ʱ���

//�ֲ��������������ڣ������������������ڿ�ʼ���������򱻴ݻ�
//ȫ�ֱ������������ڣ��������������

int main3()
{
	{
		int a = 10;
		printf("%d\n", a);
	}
	//printf("%d\n", a);����a����ʹ�ã��Ѿ����ݻ�
	return 0;
}