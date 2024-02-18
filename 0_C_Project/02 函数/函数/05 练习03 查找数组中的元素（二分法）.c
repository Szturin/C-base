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
	return -1;//�Ҳ�����
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
// �ں��������������Ԫ�ظ���������Ϊlen
//  ��� ��len = 2
//���������//aֻ����Ϊһ��ָ�룬������a����һ�������飬����ʱ��������֪����a��ʾ�ĵ�ַ�ж��sizeof��a��ֻ��һ��ָ��Ĵ�С��

int main05()
{
	int arr[] = { 1,3,5,8,9,6,4,7 };//������������������޷�ʹ�ö��ַ�
	int len = sizeof(arr) / sizeof(arr[0]);//�������lenΪ�����Ԫ�ظ���
	print_arr(arr, len);
	list_arr(arr, len);//ð�����򣿲��ܽ������������
	print_arr(arr, len);
	//дһ���������β�Ϊ ���� Ҫ���ҵ�Ԫ�� ���鳤��
	int number = 0;
	printf("������Ҫ���ҵ���");
	scanf("%d", &number);
	//���鴫�ݲ�����ȥ�������ϴ��ݵ���ָ�룬�������鱾��
	int ret = binary_search(arr, number, len);
	if (-1 == ret)//��û���ҵ�Ҫ���Ԫ�أ�����-1
	{
		printf("û���ҵ�Ԫ��");
	}
	else
	{
		printf("�ҵ��ˣ�Ԫ����������±�<%d>��", ret);//���ҵ�Ԫ�أ����ض�Ӧ���±�
	}
	return 0;
}