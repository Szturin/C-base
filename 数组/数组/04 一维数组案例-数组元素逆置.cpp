#include<iostream>
using namespace std;
//案例描述：请声明一个5个元素的数组，并将元素逆置。
int main4()
{
	//实现数组元素逆置

	//1.创建数组
	int arr[5] = { 1,3,2,5,4 };
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
	//2.实现逆置
	//记录起始下标位置
	//记录结束下标位置
	//起始下标和结束下标的元素互换
	//起始位置++, 结束位置--
	//循环执行2.1操作，直到起始位置 >=结束位置

	
    //逆置的两个元素“对位”。
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1; 

	while (start < end)
	{
		//实现元素互换
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		//下标更新
		start++;
		end--;
	}

	//3.打印逆置后的数组
	cout << "逆置后的数组：" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}




	system("pause");
	return(0);
}