#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main33()
{
	char password[20] = { 0 };
	printf("���������룺");
	scanf("%s", password);
	printf("��ȷ������(Y/N)��");

	//���������
	//getchar();//�õ�\n:�س�
	//getchar();ִ��һ��ֻ�ܻ�ȡһ���ַ�

	//���������Ķ���ַ�
	int tmp = 0;
	while ((tmp = getchar()) != '\n') //getchar�����õ������ַ������Ƿ���ֵ��ASCIIֵ�ȵȣ����Կ��������ͱ�����ȡ
	{
		;//�ղ���
	}

	int ch = getchar();
	if (ch == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}

	else
	{
		printf("ȷ��ʧ��\n");
	}

	return 0;
}