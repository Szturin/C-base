#include<iostream>
using namespace std;

int main7()
{
	//��ά����������;

	//1.���Բ鿴ռ���ڴ�ռ��С
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	cout << "��ά����ռ���ڴ�ռ�Ϊ��" << sizeof(arr) << endl;
	cout << "��ά�����һ��ռ���ڴ�ռ�Ϊ��" << sizeof(arr[0]) << endl;
	cout << "��ά�����ÿ��Ԫ��ռ���ڴ�ռ�Ϊ��" << sizeof(arr[0][0]) << endl;
	
	cout << "��ά��������Ϊ��" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "��ά��������Ϊ��" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
	

	//2.���Բ鿴��ά������׵�ַ
	cout << "��ά������׵�ַΪ��" << (int)arr << endl;
	cout << "��ά�����һ�е��׵�ַΪ��" << (int)arr[0] << endl;//��ά�����һ�У���ά�����һ��Ԫ�أ���ά�����׵�ַһ��
	cout << "��ά����ڶ��е��׵�ַΪ��" << (int)arr[1] << endl;

	cout << "��ά�����һ��Ԫ�ص��׵�ַΪ��" << (int)&arr[0][0] << endl;
	cout << "��ά�����һ��Ԫ�ص��׵�ַΪ��" << (int)&arr[0][1] << endl;


	system("pause");
	return(0);
}