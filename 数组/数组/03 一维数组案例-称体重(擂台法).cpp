#include<iostream>
using namespace std;

int main3()
{
	//1.创建5只小猪体重的数组
	int arr[5] = { 300,350,200,400,250 };

	//2.从数组中找到最大值
	int max = 0;//认定一个最大值

	for (int i = 0; i < 5; i++)
	{
		//cout << arr[i] endl;
		//如果访问的数组中的元素比认定的最大值还要大，更新最大值
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "最大体重为：" << max << endl;


	system("pause");
	return(0);
}