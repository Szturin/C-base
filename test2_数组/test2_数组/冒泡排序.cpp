#include<iostream>
using namespace std;
int main3()
{

	int arr0[10] = { 9,5,8,7,4,6,0,2,3,1 };

	cout << "����������飺";
	for (int i = 0; i <= 9; i++)
	{
		cout << arr0[i] << " ";
	}


	int num = sizeof(arr0) / sizeof(arr0[0]);//����Ԫ�ظ���

		for (int i = 1; i <= num - 1; i++)//��������,��1��ʼ
		{
			for (int j = 0; j < num - i; j++)//��һ�ֽ���9��,����i����j�����ֵ���εݼ�,ð���������ֵ�����ֽ�������-1
			{
				if (arr0[j] > arr0[j + 1])
				{
					int temp = arr0[j];
					arr0[j] = arr0[j + 1];
					arr0[j + 1] = temp;
				}

			}
		}

	cout << "ð�����������飺" << endl;
	for (int i = 0; i <= 9; i++)
	{
		cout << arr0[i] << " ";
	}

	system("pause");
	return(0);
}