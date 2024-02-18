#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int binary_search(int a[], int num,int len)
{
	int left = 0;
	int right = len - 1;
	
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (a[mid] < num)
		{
			left = mid + 1;
		}
		else if (a[mid] > num)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;//找不到了
}


void print_arr(int a[],int len)
{
	int i = 0;
	printf("%d\n", len);
	for (i = 0; i < len; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void list_arr(int* a,int len)
{
	int i, j = 0;
	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}

		}
	}
}
// 在函数里面求数组的元素个数，定义为len
//  结果 ：len = 2
//错误分析：//a只是作为一个指针，而不是a【】一整个数组，运行时编译器不知道以a表示的地址有多大。sizeof（a）只是一个指针的大小。

int main05()
{
	int arr[] = { 1,3,5,8,9,6,4,7 };//错误分析：无序数组无法使用二分法
	int len = sizeof(arr) / sizeof(arr[0]);//定义变量len为数组的元素个数
	print_arr(arr, len);
	list_arr(arr, len);//冒泡排序？不能解决根本的问题
	print_arr(arr, len);
	//写一个函数，形参为 数组 要查找的元素 数组长度
	int number = 0;
	printf("请输入要查找的数");
	scanf("%d", &number);
	//数组传递参数过去，本质上传递的是指针，不是数组本身
	int ret = binary_search(arr, number, len);
	if (-1 == ret)//若没有找到要求的元素，返回-1
	{
		printf("没有找到元素");
	}
	else
	{
		printf("找到了，元素在数组的下标<%d>中", ret);//若找到元素，返回对应的下标
	}
	return 0;
}