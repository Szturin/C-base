#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//求数组中的最大值
int main1()
{
	//定义数组
	int arr[10] = {0};
	//输入数组元素
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("请输入第%d个数字：", i+1);
		scanf("%d", &arr[i]);
	}

	int len = sizeof(arr) / sizeof(arr[0]);//数组的长度

	int max = arr[0];//假设
	for ( i = 1; i < len; i++)

	{
		if (arr[i] > max)
		{
			max = arr[i];//更新max
		}
	}
	//输出最大值
	printf("数组中的最大值为%d\n", max);
	return 0;
	

}