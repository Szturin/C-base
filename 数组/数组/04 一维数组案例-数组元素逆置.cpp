#include<iostream>
using namespace std;
//����������������һ��5��Ԫ�ص����飬����Ԫ�����á�
int main4()
{
	//ʵ������Ԫ������

	//1.��������
	int arr[5] = { 1,3,2,5,4 };
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
	//2.ʵ������
	//��¼��ʼ�±�λ��
	//��¼�����±�λ��
	//��ʼ�±�ͽ����±��Ԫ�ػ���
	//��ʼλ��++, ����λ��--
	//ѭ��ִ��2.1������ֱ����ʼλ�� >=����λ��

	
    //���õ�����Ԫ�ء���λ����
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1; 

	while (start < end)
	{
		//ʵ��Ԫ�ػ���
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		//�±����
		start++;
		end--;
	}

	//3.��ӡ���ú������
	cout << "���ú�����飺" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}




	system("pause");
	return(0);
}