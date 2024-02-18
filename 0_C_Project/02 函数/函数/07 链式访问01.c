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
	//结果：4321
	//解释：printf返回的值为打印的字符个数，所以运行结果为4321
	return 0;
}