#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main01()
{
	//�⺯������ʶ
	//ѧϰc���Թ����У�����İ�������������ο��ĵ���վ��ѧ��ʹ�ù���������
	char arr1[20] = { 0 };
	char arr2[] = "hello world";
	strcpy(arr1, arr2);//�ַ�������
	printf("%s\n", arr1);
	memset(arr1, 'x', 5);//�����ڴ��
	printf("%s\n", arr1);
	return 0;
	//ѧϰ�ص㣺�Զ��庯��
}