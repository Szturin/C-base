#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main32()
{
	//getchar() ��ȡһ���ַ�
	//EOF end of file �ļ������ı�ʶ
	//putchar() ���һ���ַ�
	//int ch = getchar();
	//putchar(ch);

	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
	//ctrl + z ��ȡ��EOF����
}