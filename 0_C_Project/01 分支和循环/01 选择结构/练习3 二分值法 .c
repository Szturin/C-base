#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��һ�����������в��Ҿ����ĳ������n��
//�㷨������ֵ��
int main03()
{

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;//Ҫ���ҵ�����
	//��arr�������������в���k��Ӧ��ֵ
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
			printf("Ҫ���ҵ�ֵ��Ӧ�����е��±�[%d]\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("������û�д����ҵ�ֵ");
	}
	return 0;
}
//�����ҵķ�Χ�� 6 ~ 7ʱ���±�Ϊ5��6 �� 5+6/2 = 5 ����ʱleft +1 , mid = 6+6/2 =6 ���ɹ��ҵ���7��Ӧ���±�