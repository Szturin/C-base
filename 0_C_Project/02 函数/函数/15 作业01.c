#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�����ָ������Դ���
void test15(int arr[])
{
	arr[0] = 1;
	arr[0] = 2;
}

//��������Ƕ�׵��õ�����Ƕ�׶���
int main15()
{
	int arr[10] = { 0 };
	test15(arr);
}