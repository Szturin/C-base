#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main07()
{
	char arr1[20] = { 0 };
	char arr2[] = "bit";
	strcpy(arr1, arr2);
	printf("%s\n", arr1);
	printf("%s\n", strcpy(arr1, arr2));
	printf("%d\n", printf("%d", printf("%d", 43)));
	//�����4321
	//���ͣ�printf���ص�ֵΪ��ӡ���ַ��������������н��Ϊ4321
	return 0;
}