#include<iostream>
using namespace std;

//��������

//ð������
void bubbleSort(int* arr, int len)
{
	for (int i = 1; i <= len - 1; i++)
	{
		for (int j = 0; j < len - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1]; //*arr�� arr[0]����һ��
				arr[j + 1] = temp;
			}

		}
	}
}

//�����������Ԫ��
void printArarry(int*arr,int len)
{
	cout << "�������������Ԫ�أ�" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}

//������
int main()
{
	int arr[] = { 8,7,5,9,6,4,18,3,2,1,0 };//��������
	int len = sizeof(arr) / sizeof(arr[0]);//�������鳤��

	cout << "���ð������ǰ�����飺" << endl;
	printArarry(arr, len);

	cout << "���ð�����������飺" << endl;
	bubbleSort(arr, len);
	printArarry(arr, len);

	system("pause");
	return 0;
}