#include<iostream>
using namespace std;
int main()
{
	int arr[3][3] =
	{
		{100,222,44},{180,222,44},{170,272,44}
	};//�����������

	const int row = sizeof(arr) / sizeof(arr[0]);//����,����Ϊ����
	const int column = sizeof(arr[0]) / sizeof(arr[0][0]);//����
	int sum = 0;

	string name[row] = { "A��","B��","C��" };
	for (int i = 0; i < row; i++)
	{	
		int sum0 = 0;//ÿ������
		for (int j = 0; j < column; j++)
		{
			sum0 += arr[i][j];
			sum += arr[i][j];
		}
		cout << name[i] << "���ܺ�Ϊ��" << sum0 << endl;
	}

	cout << "����������Ԫ�صĺ�Ϊ��" << sum << endl;
	system("pause");
	return(0);
}