#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//数组和指针均可以传参
void test15(int arr[])
{
	arr[0] = 1;
	arr[0] = 2;
}

//函数可以嵌套调用但不能嵌套定义
int main15()
{
	int arr[10] = { 0 };
	test15(arr);
}