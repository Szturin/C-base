#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//在一个有序数组中查找具体的某个数字n。
//算法：二分值法
int main03()
{

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;//要查找的数字
	//在arr这个有序的数组中查找k对应的值
	int len = sizeof(arr) / sizeof(arr[0]);

	int left = 0;
	int right = len - 1;

	while (left <= right)
	{
		int mid = left + right;

		if (arr[mid] < k)
		{
			left = mid + 1;
		}

		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		
		else
		{
			printf("要查找的值对应数组中的下标[%d]\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("数组中没有待查找的值");
	}
	return 0;
}
//当查找的范围在 6 ~ 7时，下标为5和6 ， 5+6/2 = 5 ，此时left +1 , mid = 6+6/2 =6 ，成功找到了7对应的下标