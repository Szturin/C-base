#include<iostream>
using namespace std;
//����������������һ��5��Ԫ�ص����飬����Ԫ�����á�
int main2()
{
	int arr1[5] = { 5,4,3,2,1 };
	int start = 0;
	int end = sizeof(arr1) / sizeof(arr1[0]) - 1;//�����±�
	while (start < end)
	{
		int temp = arr1[start];
		arr1[start] = arr1[end];
		arr1[end] = temp;
		start++;
		end--;
	}    
	//cout << "���ú������Ϊ��" << arr1 << end; �������16���Ƶ�ַ
	cout << "���ú�����飺" << endl;
	for (int i = 0; i <=4; i++)
	{
		cout << arr1[i] << " ";
	}

	system("pause");
	return(0);
}