#include<iostream>
using namespace std;

int main3()
{
	//1.����5ֻС�����ص�����
	int arr[5] = { 300,350,200,400,250 };

	//2.���������ҵ����ֵ
	int max = 0;//�϶�һ�����ֵ

	for (int i = 0; i < 5; i++)
	{
		//cout << arr[i] endl;
		//������ʵ������е�Ԫ�ر��϶������ֵ��Ҫ�󣬸������ֵ
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "�������Ϊ��" << max << endl;


	system("pause");
	return(0);
}