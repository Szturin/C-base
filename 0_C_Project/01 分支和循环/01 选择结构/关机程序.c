#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main0000001()
{
	//�ػ�
	//c�����ṩ��һ������:system() -ִ��ϵͳ�����
	char input[20] = { 0 }; //����������Ϣ
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬��ĵ��Խ���1�����ڹػ���������룺�Ұ���ԭ�񣬾�ȡ���ػ�\n");
	scanf("%s", input);
	if (strcmp(input, "�Ұ���ԭ��") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}