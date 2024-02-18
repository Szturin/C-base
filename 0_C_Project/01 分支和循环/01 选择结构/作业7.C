#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main007()
{
	
	int a = 5, b = 1, c = 9;
	int arr[3] = { a,b,c };
	int i, j = 0;

	for (i = 0; i < 3; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("原始数组为:");

	for (i = 0; i < 3; i++)
	{
		printf("%d ", arr[i]);
	}

	int len = sizeof(arr) / sizeof(arr[0]);
	int temp = 0;

	// 改变 a,b,c的值不能直接改变arr中元素的值,实际上在初始定义arr时将a,b,c的值传入了arr而不是变量本身

	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len - i - 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	printf("从高到低排序：");
	for (i = 0; i < len; i++)
	{
		printf("%d  ", arr[i]);
	}

	return 0;
}