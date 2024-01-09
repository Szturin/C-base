#include<iostream>
using namespace std;

//函数定义

//冒泡排序
void bubbleSort(int* arr, int len)
{
	for (int i = 1; i <= len - 1; i++)
	{
		for (int j = 0; j < len - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1]; //*arr和 arr[0]作用一致
				arr[j + 1] = temp;
			}

		}
	}
}

//遍历输出数组元素
void printArarry(int*arr,int len)
{
	cout << "输出数组中所有元素：" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}

//主程序
int main()
{
	int arr[] = { 8,7,5,9,6,4,18,3,2,1,0 };//定义数组
	int len = sizeof(arr) / sizeof(arr[0]);//定义数组长度

	cout << "输出冒泡排序前的数组：" << endl;
	printArarry(arr, len);

	cout << "输出冒泡排序后的数组：" << endl;
	bubbleSort(arr, len);
	printArarry(arr, len);

	system("pause");
	return 0;
}