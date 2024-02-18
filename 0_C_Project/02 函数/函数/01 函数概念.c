#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main01()
{
	//库函数的认识
	//学习c语言过程中，遇到陌生函数，主动参考文档网站（学会使用工具搜索）
	char arr1[20] = { 0 };
	char arr2[] = "hello world";
	strcpy(arr1, arr2);//字符串拷贝
	printf("%s\n", arr1);
	memset(arr1, 'x', 5);//设置内存块
	printf("%s\n", arr1);
	return 0;
	//学习重点：自定义函数
}