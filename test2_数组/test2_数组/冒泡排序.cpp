#include<iostream>
using namespace std;
int main3()
{

	int arr0[10] = { 9,5,8,7,4,6,0,2,3,1 };

	cout << "待排序的数组：";
	for (int i = 0; i <= 9; i++)
	{
		cout << arr0[i] << " ";
	}


	int num = sizeof(arr0) / sizeof(arr0[0]);//数组元素个数

		for (int i = 1; i <= num - 1; i++)//排序轮数,从1开始
		{
			for (int j = 0; j < num - i; j++)//第一轮交换9次,随着i增大j的最大值依次递减,冒出此轮最大值后，下轮交换次数-1
			{
				if (arr0[j] > arr0[j + 1])
				{
					int temp = arr0[j];
					arr0[j] = arr0[j + 1];
					arr0[j + 1] = temp;
				}

			}
		}

	cout << "冒泡排序后的数组：" << endl;
	for (int i = 0; i <= 9; i++)
	{
		cout << arr0[i] << " ";
	}

	system("pause");
	return(0);
}