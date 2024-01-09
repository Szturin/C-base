#include<iostream>
using namespace std;
int main()
{
	int arr[3][3] =
	{
		{100,222,44},{180,222,44},{170,272,44}
	};//变量定义语句

	const int row = sizeof(arr) / sizeof(arr[0]);//行数,定义为常量
	const int column = sizeof(arr[0]) / sizeof(arr[0][0]);//列数
	int sum = 0;

	string name[row] = { "A组","B组","C组" };
	for (int i = 0; i < row; i++)
	{	
		int sum0 = 0;//每轮清零
		for (int j = 0; j < column; j++)
		{
			sum0 += arr[i][j];
			sum += arr[i][j];
		}
		cout << name[i] << "的总和为：" << sum0 << endl;
	}

	cout << "数组中所有元素的和为：" << sum << endl;
	system("pause");
	return(0);
}