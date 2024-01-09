#include<iostream>
using namespace std;
int main1()
{
	int arr[9] = { 100,22,455,159,4875,4785,444,459,9909 };
	int max = 1;
	for (int i = 1; i <= 9; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "最大数为：" << max << endl;
	system("pause");
	return(0);
}