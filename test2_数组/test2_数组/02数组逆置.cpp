#include<iostream>
using namespace std;
//案例描述：请声明一个5个元素的数组，并将元素逆置。
int main2()
{
	int arr1[5] = { 5,4,3,2,1 };
	int start = 0;
	int end = sizeof(arr1) / sizeof(arr1[0]) - 1;//数组下标
	while (start < end)
	{
		int temp = arr1[start];
		arr1[start] = arr1[end];
		arr1[end] = temp;
		start++;
		end--;
	}    
	//cout << "逆置后的数组为：" << arr1 << end; 输出的是16进制地址
	cout << "逆置后的数组：" << endl;
	for (int i = 0; i <=4; i++)
	{
		cout << arr1[i] << " ";
	}

	system("pause");
	return(0);
}