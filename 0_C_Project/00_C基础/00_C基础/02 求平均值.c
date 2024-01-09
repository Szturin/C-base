#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main2()
{
	int arr[10] = {0};//初始化数组
	int i = 0;
	int sum = 0;
	//输入
	for (i = 0; i < 10; i++)
	{
		printf("请输入第%d个数字：\n", i + 1);
		scanf("%d", &arr[i]);
		sum = sum + arr[i];
	}
	
	
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("数组长度为%d\n", len);

	////求和
	//int sum = 0;
	//for (i = 0; i < len; i++)
	//{
	//	sum = sum + arr[i];
	//}

	//求平均值
	double avg = sum / len;
	printf("和为%d\n", sum);
	printf("平均值为%lf", avg);

	system("pause");
	return 0;
}